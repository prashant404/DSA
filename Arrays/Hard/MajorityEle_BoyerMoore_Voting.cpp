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
using namespace std;

class Solution {
public:
    std::vector<int> majorityElement(std::vector<int>& nums) {
          int n1 = 0;
        int n2 = 0;
        int count1 = 0;
        int count2 = 0;

        if (nums.empty()) {
            return {};
        }

        for (int i = 0; i < nums.size(); i++) {
            if (count1 == 0 && nums[i] != n2) {
                count1++;
                n1 = nums[i];
            } else if (count2 == 0 && nums[i] != n1) {
                count2++;
                n2 = nums[i];
            } else if (n1 == nums[i]) {
                count1++;
            } else if (n2 == nums[i]) {
                count2++;
            } else {
                count1--;
                count2--;
            }
        }
        vector<int> result;
        int t = nums.size();
        count1 = 0;
        count2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (n1 == nums[i]) {
                count1++;
            } else if (n2 == nums[i]) {
                count2++;
            }
        }

        if (count1 > t / 3) {
            result.push_back(n1);
        }
        if (count2 > t / 3) {
            result.push_back(n2);
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
