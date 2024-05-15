/*Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).
 

Example 1:

Input: nums = [3,4,5,2]
Output: 12 
Explanation: If you choose the indices i=1 and j=2 (indexed from 0), you will get the maximum value, that is, (nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12. */

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

class Solution {
public:
    int maxProduct(std::vector<int>& nums) {
        int result = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int product = (nums[i] - 1) * (nums[j] - 1);
                result = std::max(result, product);
            }
        }
        return result;
    }
};

int main() {
    // Example input
    std::vector<int> nums = {3, 4, 5, 2};
    
    // Create an instance of Solution
    Solution sol;
    
    // Calculate the maximum product
    int result = sol.maxProduct(nums);
    
    // Output the result
    std::cout << "The maximum product is: " << result << std::endl;
    
    return 0;
}
