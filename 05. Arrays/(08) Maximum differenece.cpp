#include<bits/stdc++.h>
using namespace std;

//Maximum difference of arr[j] - arr[i] such that j > i
int maximumdiff(int arr[], int n)
{
    int mn = arr[0], mx = arr[1] - arr[0];
    for(int j=1; j<n; j++)
    {
        mx = max(mx, arr[j]-mn);
        mn = min(mn, arr[j]);
    }
    return mx;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<maximumdiff(arr, n)<<endl;
    return 0;
}
