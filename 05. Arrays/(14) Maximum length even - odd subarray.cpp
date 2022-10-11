#include<bits/stdc++.h>
using namespace std;

//Maximum length even - odd subarray :
int maxevenodd (int arr[], int n)
{
    int res = 1, curr = 1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]%2 != arr[i-1]%2)
            curr++;
        else{
            res = max(res, curr);
            curr = 1;
        }
    }
    return max(res, curr);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<maxevenodd(arr, n)<<endl;
    return 0;
}
