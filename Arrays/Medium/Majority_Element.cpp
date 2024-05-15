/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
*/

#include <iostream>
#include <vector>
#include <map>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int size = 0.5 * nums.size();
        std::map<int, int> mpp;
        for (auto it : nums) {
            mpp[it]++;
        }
        for (auto it : mpp) {
            if (it.second > size) {
                return it.first;
            }
        }
        return -1;
    }
};

int main() {
    // Example input
    std::vector<int> nums = {3, 2, 3};
    
    // Create an instance of Solution
    Solution sol;
    
    // Find the majority element
    int result = sol.majorityElement(nums);
    
    // Output the result
    std::cout << "The majority element is: " << result << std::endl;
    
    return 0;
}
