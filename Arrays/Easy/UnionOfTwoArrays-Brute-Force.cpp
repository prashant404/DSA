#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    set<int> merge;

    for(int i = 0; i < a.size(); i++) {
        merge.insert(a[i]);
    }
    for(int i = 0; i < b.size(); i++) {
        merge.insert(b[i]);
    }
    vector<int> result(merge.size());
    int i = 0;
    for(auto it : merge) {
        result[i++] = it;
    }

    return result;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {4, 5, 6, 7, 8};

    vector<int> mergedArray = sortedArray(a, b);

    cout << "Merged Array: ";
    for(int i = 0; i < mergedArray.size(); i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
