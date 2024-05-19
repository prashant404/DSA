/*First Missing Positive
Solved
Hard
Topics
Companies
Hint
Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.

You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.
Example 1:

Input: nums = [1,2,0]
Output: 3
Explanation: The numbers in the range [1,2] are all in the array.
*/

/*Approach : 1 Cyclic Sort
Iterate through the array and mark non-positive integers with a large value (in this case, INT_MAX).
Iterate through the array again, and for each positive integer found, mark the corresponding index (value - 1) as negative.
Iterate through the array one last time to find the first positive number (index + 1) and return it.
If no positive number is found, return n+1, where n is the size of the array, indicating that all positive integers from 1 to n are present in the array.
Complexity : O(n) and O(1)
*/

class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] <= 0)
            {
                nums[i] = INT_MAX;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (abs(nums[i]) <= n && nums[abs(nums[i]) - 1] > 0)
            {
                nums[abs(nums[i]) - 1] *= -1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                return i + 1;
            }
        }
        return n + 1;
    }
};