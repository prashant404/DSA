#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n)
{
	int start = 0;
	int end = n-1;

	while(start<end)
	{
		// swap(arr[start],arr[end]);
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}

	for(int i = 0;i<n;i++){
		cout << arr[i] <<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	int k = 3;
	int arr[n];

	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}

reverse(arr,n);

}