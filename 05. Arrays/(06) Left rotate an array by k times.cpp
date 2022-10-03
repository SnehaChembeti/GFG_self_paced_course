#include<bits/stdc++.h>
using namespace std;

//Printing array elements :
void printarray(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

//Reversing array elements :
void reversearray(int arr[], int low, int high)
{
    while(low<high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

//Rotating array elements by k times :
void rotateleftk(int arr[], int n, int k)
{
    reversearray(arr, 0, k-1);
    reversearray(arr, k, n-1);
    reversearray(arr, 0, n-1);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int k;
    cin>>k;
    rotateleftk(arr, n, k);
    printarray(arr, n);
    return 0;
}
