/*Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]
 

Constraints:

1 <= nums.length <= 5 * 104
-109 <= nums[i] <= 109
 

Follow up: Could you solve the problem in linear time and in O(1) space?*/

/*Explanation:
Finding Candidates:

We use two candidate variables (candidate1 and candidate2) and their respective counts (count1 and count2).
As we iterate through the array, we apply the Boyer-Moore Voting Algorithm to find up to two potential majority elements.
Verifying Candidates:

We reset the counts and iterate through the array again to verify if the candidates indeed appear more than ⌊ n/3 ⌋ times.
Returning the Result:

If a candidate's count is more than ⌊ n/3 ⌋, it is added to the result vector.*/

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> majorityElement(std::vector<int>& nums) {
        if (nums.empty()) return {};
        
        // Boyer-Moore Voting Algorithm
        int candidate1 = 0, candidate2 = 0, count1 = 0, count2 = 0;
        
        // Step 1: Find candidates
        for (int num : nums) {
            if (num == candidate1) {
                ++count1;
            } else if (num == candidate2) {
                ++count2;
            } else if (count1 == 0) {
                candidate1 = num;
                count1 = 1;
            } else if (count2 == 0) {
                candidate2 = num;
                count2 = 1;
            } else {
                --count1;
                --count2;
            }
        }
        
        // Step 2: Verify candidates
        count1 = 0;
        count2 = 0;
        for (int num : nums) {
            if (num == candidate1) {
                ++count1;
            } else if (num == candidate2) {
                ++count2;
            }
        }
        
        std::vector<int> result;
        int n = nums.size();
        if (count1 > n / 3) {
            result.push_back(candidate1);
        }
        if (count2 > n / 3) {
            result.push_back(candidate2);
        }
        
        return result;
    }
};

int main() {
    // Example input
    std::vector<int> nums1 = {3, 2, 3};
    std::vector<int> nums2 = {1};
    std::vector<int> nums3 = {1, 2};

    // Create an instance of Solution
    Solution sol;

    // Find the majority elements
    std::vector<int> result1 = sol.majorityElement(nums1);
    std::vector<int> result2 = sol.majorityElement(nums2);
    std::vector<int> result3 = sol.majorityElement(nums3);

    // Output the results
    std::cout << "The majority elements in nums1 are: ";
    for (int num : result1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "The majority elements in nums2 are: ";
    for (int num : result2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "The majority elements in nums3 are: ";
    for (int num : result3) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
