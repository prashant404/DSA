#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(); // Get the size of the input vector

        int j;

        // If the input vector is empty, return early
        if(n == 0) {
            return;
        }

        // Iterate through the input vector to find the index of the first zero
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) {
                j = i; // Store the index of the first zero in j
                break; // Break out of the loop once the first zero is found
            }
        }

        // Iterate through the input vector starting from the index after the first zero
        for(int i = j + 1; i < n; i++) {
            // If the current element is not zero
            if(nums[i] != 0) {
                // Swap the current element with the element at index j (where the first zero was found)
                swap(nums[i], nums[j]);
                // Increment j to move it to the next position where a zero should be placed
                j++;
            }
        }
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    Solution sol;
    sol.moveZeroes(nums);

    cout << "Array after moving zeroes to the end: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
