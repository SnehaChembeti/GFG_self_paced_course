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

//Maximum circular subarray sum :
int overallmax (int arr[], int n)
{
    int maxsubarray = Maximumsubarray(arr, n);
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        arr[i] *= -1;
    }
    int max_circular = sum + Maximumsubarray(arr, n);
    return max(max_circular, maxsubarray);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<overallmax(arr, n)<<endl;
    return 0;
}
