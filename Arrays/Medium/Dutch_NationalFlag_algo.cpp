/* Sort An Array of 0s, 1s and 2s

Problem statement
You have been given an array/list 'arr' consisting of 'n' elements.

Each element in the array is either 0, 1 or 2.

Sort this array/list in increasing order.

Do not make a new array/list. Make changes in the given array/list.

Example :
Input: 'arr' = [2, 2, 2, 2, 0, 0, 1, 0]

Output: Final 'arr' = [0, 0, 0, 1, 2, 2, 2, 2]

Explanation: The array is sorted in increasing order.*/

#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    void sortArray(vector<int>& arr, int n) {
        int low = 0;
        int mid = 0;
        int high = n - 1;
        while (mid <= high) {
            if (arr[mid] == 0) {
                if (mid != low) { // Avoid unnecessary swaps
                    swap(arr[mid], arr[low]);
                }
                low++;
                mid++;
            } else if (arr[mid] == 2) {
                if (mid != high) { // Avoid unnecessary swaps
                    swap(arr[mid], arr[high]);
                }
                high--;
            } else {
                mid++;
            }
        }
    }
};

int main() {
    // Example input
    vector<int> arr = {0, 1, 2, 0, 1, 2};
    
    // Create an instance of Solution
    Solution sol;
    
    // Sort the array
    sol.sortArray(arr, arr.size());
    
    // Output the result
    cout << "The sorted array is: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
