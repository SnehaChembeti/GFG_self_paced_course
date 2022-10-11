#include<bits/stdc++.h>
using namespace std;

//Finding majority element :
int findmajority(int arr[], int n)
{
    int res = 0, count =1;
    for(int i=1; i<n; i++)
    {
        if(arr[i] == arr[res])
            count++;
        else
            count--;
        if(count == 0)
        {
            count = 1;
            res = i;
        }
        cout<<res<<endl;
    }
    count = 0;
    for(int i=0; i<n; i++)
        if(arr[i] == arr[res])
            count++;
    if(count > n/2)
        return res;
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<findmajority(arr, n)<<endl;
    return 0;
}
