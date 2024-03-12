#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        // XOR all elements in the array
        for (int num : nums) {
            result ^= num;
        }
        return result; // The result will be the single number
    }
};

int main() {
    Solution sol;
    // Test vector
    vector<int> nums = {4, 1, 2, 1, 2};
    // Find the single number
    int result = sol.singleNumber(nums);
    // Print the result
    cout << "Single number is: " << result << endl;
    return 0;
}
