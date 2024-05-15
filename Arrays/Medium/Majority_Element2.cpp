/*Given an integer array sorted in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time,
 return that integer.

Example 1:

Input: arr = [1,2,2,6,6,6,6,7,10]
Output: 6*/

#include <iostream>
#include <vector>
#include <map>

class Solution
{
public:
    int findSpecialInteger(std::vector<int> &arr)
    {
        int val = 0.25 * arr.size();
        std::map<int, int> mpp;
        for (auto &i : arr)
        {
            mpp[i]++;
        }
        for (auto &it : mpp)
        {
            if (it.second > val)
            {
                return it.first;
            }
        }
        return -1;
    }
};

int main()
{
    // Example input
    std::vector<int> arr = {1, 2, 2, 6, 6, 6, 6, 7, 10};

    // Create an instance of Solution
    Solution sol;

    // Find the special integer
    int result = sol.findSpecialInteger(arr);

    // Output the result
    std::cout << "The special integer is: " << result << std::endl;

    return 0;
}
