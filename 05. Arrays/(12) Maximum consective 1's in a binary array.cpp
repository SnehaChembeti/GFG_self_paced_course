#include<bits/stdc++.h>
using namespace std;

//Maximum consective 1's in a binary array :
int maximumconsec(int arr[], int n)
{
    int curr = 0, res = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 0)
            curr = 0;
        else
        {
            curr++;
            res = max(res, curr);
        }
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<maximumconsec(arr, n)<<endl;
    return 0;
}
