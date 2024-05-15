/*You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should return the array of nums such that the the array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

 

Example 1:

Input: nums = [3,1,-2,-5,2,-4]
Output: [3,-2,1,-5,2,-4]
Explanation:
The positive integers in nums are [3,1,2]. The negative integers are [-2,-5,-4].
The only possible way to rearrange them such that they satisfy all conditions is [3,-2,1,-5,2,-4].
Other ways such as [1,-2,2,-5,3,-4], [3,1,2,-2,-5,-4], [-2,3,-5,1,-4,2] are incorrect because they do not satisfy one or more conditions.  */

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> rearrangeArray(std::vector<int>& nums) {
        std::vector<int> pos, neg;
        int n = nums.size();
        
        // Separate the numbers into positive and negative vectors
        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                pos.push_back(nums[i]);
            } else {
                neg.push_back(nums[i]);
            }
        }

        // Rearrange the array by alternating positive and negative numbers
        std::vector<int> result;
        for(int i = 0; i < pos.size(); i++) {
            result.push_back(pos[i]);
            result.push_back(neg[i]);
        }

        return result;
    }
};

int main() {
    // Example input
    std::vector<int> nums = {3, 1, -2, -5, 2, -4};
    
    // Create an instance of Solution
    Solution sol;
    
    // Rearrange the array
    std::vector<int> result = sol.rearrangeArray(nums);
    
    // Output the result
    std::cout << "The rearranged array is: ";
    for(int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
