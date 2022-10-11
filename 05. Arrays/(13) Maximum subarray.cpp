#include<bits/stdc++.h>
using namespace std;

//Maxsubarray sum :
int Maximumsubarray(int arr[], int n)
{
    int res = arr[0], maxi = arr[0];
    for(int i=1; i<n; i++)
    {
        maxi = max(maxi+arr[i], arr[i]);
        res = max(res, maxi);
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
    cout<<Maximumsubarray(arr, n)<<endl;
    return 0;
}
