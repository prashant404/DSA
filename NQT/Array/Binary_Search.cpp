#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    int low = 0;
    int high = arr.size() - 1;
    int target = 6;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (target > arr[mid]) {
            low = mid + 1;
        } else if (target < arr[mid]) {
            high = mid - 1;
        } else {
            cout << "Element found at index: " << mid << endl;
            return 0; // Found the element, exit the program
        }
    }

    cout << "Element not found" << endl;
    return 0;
}
