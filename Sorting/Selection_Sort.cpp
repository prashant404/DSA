#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

       for (int i = 0; i < n - 1; i++)
    {
        int smallestElem = i; // Initialize the index of the smallest element
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestElem])
            {
                smallestElem = j; // Update the index of the smallest element
            }
        }
        // Swap the current element with the smallest element found
        swap(arr[i], arr[smallestElem]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}