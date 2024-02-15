#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        bool rotated = false;
        
        for (int i = 0; i < n; ++i) {
            if (nums[i] > nums[(i + 1) % n]) { // Check if there is a decreasing sequence
                if (rotated) {
                    return false; // Already found one rotation, cannot rotate again
                }
                rotated = true; // Mark that rotation is found
            }
        }
        
        return true; // If no decreasing sequence found, array was sorted and rotated
    }
};

int main() {
    Solution solution;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    cout << "Is the array sorted and rotated? " << (solution.check(nums) ? "Yes" : "No") << endl;
    return 0;
}
