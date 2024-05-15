#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long maxSum = LONG_MIN;
    long long sum = 0;

    for(int i=0;i<n;i++){
        sum = sum+arr[i];
        if(sum>maxSum){
            maxSum = sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<"Max sum subarray: "<<maxSum;
}