#include<bits/stdc++.h>
using namespace std;

//Stock, buy and sell to get max profit;
int maxProfit(int arr[], int n)
{
    int profit = 0;
    for(int i=1; i<n; i++){
        if(arr[i] > arr[i-1])
            profit += (arr[i]-arr[i-1]);
    }
    return profit;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<maxProfit(arr, n)<<endl;
    return 0;
}
