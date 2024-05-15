#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long max = LONG_MIN;
    long long sum = 0;
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        sum  = sum+arr[i];

        if(sum>max)
        {
            max=sum;
        }

         if (sum < 0) {
            sum = 0;
        }
    }
    cout<<"Sum is : "<<max;
}