#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,1,2,3,2,3,4};
    int Xor = 0;
    int n = sizeof(arr)/sizeof(arr[0]); // Corrected size calculation
    for(int i=0;i<n;i++){
        Xor = Xor ^ arr[i];
    }
    cout<<Xor;
}
