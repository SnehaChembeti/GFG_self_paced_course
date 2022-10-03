#include<bits/stdc++.h>
using namespace std;

//Move all zeroes to end maintaining the same order.
void movezeroes(int arr[], int n)
{
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
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
    movezeroes(arr, n);
    printarray(arr, n);
    return 0;
}
