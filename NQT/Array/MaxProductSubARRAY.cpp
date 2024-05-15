#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,2,-3,0,-4,-5};
    int prod1 = nums[0];int prod2 = nums[0];int result = nums[0];
    int n = nums.size();

    for(int i=0;i<n;i++){
        int temp = max({nums[i],prod1*nums[i],prod2*nums[i]});
        prod2 = min({nums[i],prod1*nums[i],prod2*nums[i]});
        prod1 = temp;

        result = max(result,prod1);
    }

    cout<<"Max product Sub-Array: "<<result;
}