#include <iostream>
using namespace std;

int main()
{
    // Define an array of integers with 5 elements
    int myarray[5] = {12, 4, 3, 1, 15};

    // Print the input list
    cout << "Input list is:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << myarray[i] << "\t";
    }

    // Insertion sort algorithm
    for (int k = 1; k < 5; k++) // Start from the second element (index 1)
    {
        int temp = myarray[k]; // Store the current element to be inserted
        int j = k - 1;         // Start comparing with the element before it

        // Move elements of the sorted part that are greater than temp
        // to one position ahead of their current position
        while (j >= 0 && temp <= myarray[j])
        {
            myarray[j + 1] = myarray[j]; // Move the larger element one position ahead
            j--;                   // Move to the previous element
        }
        myarray[j + 1] = temp; // Insert the stored element at the correct position
    }

    // Print the sorted list
    cout << "\nSorted list is:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << myarray[i] << "\t";
    }

    return 0;
}
