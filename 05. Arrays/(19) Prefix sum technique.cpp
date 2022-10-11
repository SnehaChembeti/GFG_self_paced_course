#include<bits/stdc++.h>
using namespace std;

//Getting sum of element from index left to right
  /*prefix_sum[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        prefix_sum[i] = prefix_sum[i-1]+arr[i];
    }*/
int getsum (int prefix_sum[], int l, int r)
{
    if(l != 0)
        return (prefix_sum[r] - prefix_sum[l-1]);
    return prefix_sum[r];
}

//Given an array of integers , find if its ahas an equilibrium point..
// left sum of the equilibrium == right sum of the equilibrium point
bool isequilibrium(int arr[],int n)
{
    int sum = 0;
    for(int i=0; i<n; i++){
        //cout<<arr[i]<<" ";
        sum += arr[i];
        //cout<<sum<<endl;
    }
    int left_sum = 0;
    for(int i=0; i<n; i++){
        if(left_sum == sum - arr[i])
            return true;
        left_sum += arr[i];
        sum -= arr[i];
        //cout<<left_sum<<" "<<sum<<endl;
    }
    return false;
}

//Given n ranges, find the maximum appearing element in these ranges...max range value = 1000;
int maxOcc (int arr[], int brr[], int n)
{
    vector<int>v(1000); //max range value
    for(int i=0; i<n; i++){
        v[arr[i]] += 1;
        v[brr[i]+1] -= 1;
    }
    int max = v[0], res =0;
    for(int i=0; i<1000; i++)
    {
        if(max < v[i]){
            max = v[i];
            res = i;
        }
    }
    return res;
}

int main()
{
    int n;
    int prefix_sum[n];
    int arr[n],brr[n];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i]>>brr[i];
    cout<<maxOcc(arr, brr, n)<<endl;
    /*cout<<isequilibrium(arr, n)<<endl;
    prefix_sum[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        //cout<<arr[i]<<" ";
        prefix_sum[i] = prefix_sum[i-1]+arr[i];
        //cout<<arr[i]<<endl;
    }
    for(int i=0; i<n; i++)
        cout<<prefix_sum[i]<<" ";
    cout<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cout<<getsum(prefix_sum,1, 4)<<endl;
    //cout<<isequilibrium(arr, n)<<endl;*/
    return 0;
}
