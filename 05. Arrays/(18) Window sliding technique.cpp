#include<bits/stdc++.h>
using namespace std;

//Given an array of integers and a number k, find the maximum sum of k consecutive elements.
int Maxkcon(int arr[], int n, int k)
{
    int curr_sum = 0;
    for(int i=0; i<k; i++)
        curr_sum += arr[i];
    int max_sum = curr_sum;
    for(int i=k; i<n; i++)
    {
        curr_sum += (arr[i] - arr[i-k]);
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}

//Gievn an unsortes array of non-negative integers. Find if there is a subarray with a given sum
bool issubsum(int arr[], int n, int x)
{
    int curr_sum = arr[0], s=0;
    for(int e=1; e<n; e++){
        while(curr_sum > x && s<e-1)
        {
            curr_sum -= arr[s];
            s++;
        }
        if(curr_sum == x)
            return true;
        curr_sum += arr[e];
    }
    return (curr_sum == x);
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
    cout<<Maxkcon(arr, n, k)<<endl;
    cout<<issubsum(arr, n, 6)<<endl;
    return 0;
}
