#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int checkSorted(int n,int arr[])
{
	for(int i=0;i<n;i++)
	{
		if(arr[i+1]>arr[i])
		{
			
		}
		else{
			return false;
		}
	}
	return true;
}

int main()
{
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{
	cin>>arr[i];
}

cout<<checkSorted(n,arr);
}

//this follows logic that in sorted array the element at i+1 position will always be greater than ith element
// so we keep on checking traversing in array.