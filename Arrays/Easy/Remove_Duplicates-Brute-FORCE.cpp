#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n ;
cin>>n;
int arr[n];
int count = 0;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
set<int> s;

for(int i =0;i<n;i++)
{
	s.insert(arr[i]);
}

for(auto it : s)
{
	cout<<it<<" ";
} 
cout<<endl;
cout<<s.size();
}