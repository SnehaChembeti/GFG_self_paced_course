#include<bits/stdc++.h>
using namespace std;

//Trapping rain water :
int getwater(int arr[], int n)
{
    int left[n], right[n];
    left[0] = arr[0];
    right[n-1] = arr[n-1];
    for(int i=1; i<n; i++)
        left[i] = max(left[i-1], arr[i]);
    for(int i= n-2; i>=0; i--)
        right[i] = max(right[i+1], arr[i]);
    int maxrain = 0;
    for(int i=1; i<n-1; i++)
        maxrain += min(left[i], right[i]) - arr[i];
    return maxrain;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<getwater(arr, n)<<endl;
    return 0;
}
