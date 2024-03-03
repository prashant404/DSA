#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> zeros(n); // Initialize zeros vector with size n

    for (int i = 0; i < n; i++) {
        cin >> zeros[i];
    }

    vector<int> temp;

    for (int i = 0; i < n; i++) {
        if (zeros[i] != 0) {
            temp.push_back(zeros[i]);
        }
    }

    int size = temp.size();

    for (int i = 0; i < size; i++) {
        zeros[i] = temp[i];
    }

    for (int i = size; i < n; i++) {
        zeros[i] = 0;
    }

    for (int i : zeros) {
        cout << i << " ";
    }

    return 0;
}
