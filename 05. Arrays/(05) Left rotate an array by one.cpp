#include<bits/stdc++.h>
using namespace std;

//Left rotate an array by one :
void lrotateone(int arr[], int n)
{
    int temp = arr[0];
    for(int i=1; i<n; i++)
        arr[i-1] = arr[i];
    arr[n-1] = temp;
}

//Print an array :
void printarray(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    lrotateone(arr, n);
    printarray(arr, n);
    return 0;
}
