#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& arr, int n) {
    if (n == 0) {
        return 0;
    }

    int uniqueCount = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[uniqueCount++] = arr[i];
        }
    }

    return uniqueCount;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 4, 5, 5, 6,8,8,9,9};
    int n = arr.size();

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int uniqueCount = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
