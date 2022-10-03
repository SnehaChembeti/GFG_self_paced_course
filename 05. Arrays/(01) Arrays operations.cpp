//Operations on arrays :

int searchele(int arr[], int n, int x)
{
    for(int i=0; i<n; i++)
        if(arr[i] == x)
            return i;              //O(n) , O(1)
    return -1;
}

int insertele(int arr[], int n, int cap, int pos, int x)
{
    if(cap < pos || cap == n)
        return n;
    pos--;
    for(int i=pos; i<=n; i++)      //O(n) , O(1)
        arr[i+1] = arr[i];
    arr[pos] = x;
    return (n+1);
}

int deleteele(int arr[], int n, int val)
{
    int i;
    for(i=0; i<n; i++)
        if(arr[i] == val)
            break;
    if(i == n)
        return n;
    for(int j=i; i<n; i++)         //O(n) , O(1)
        arr[j] = arr[j+1];
    return (n-1);
}

/*
Inseert - O(n)
Deleting - O(n)
serach - unsorted - O(n), sorted - O(logn)
get ith element - O(1)
update ith element - O(1)

Insert at the end and delte from the end can be done in O(1) time
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cap,n;
    cin>>cap;
    int arr[cap];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int x,pos;
    cin>>x;
    cout<<arr[searchele(arr, n, x)]<<endl;
    cin>>x;
    cin>>pos;
    n = insertele(arr, n, cap, pos, x);
    cin>>x;
    n = deleteele(arr, n, x);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}
