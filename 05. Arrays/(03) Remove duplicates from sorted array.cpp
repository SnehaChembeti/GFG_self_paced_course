#include<bits/stdc++.h>
using namespace std;

//Remove duplicates from sorted array:
int remove_duplicates(int arr[], int n)
{
    int res = 1;
    for(int i=1; i<n; i++)
        if(arr[i]!= arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    return res;
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
    n = remove_duplicates(arr, n);
    printarray(arr, n);
    return 0;
}
