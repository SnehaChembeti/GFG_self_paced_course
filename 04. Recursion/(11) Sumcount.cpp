#include<bits/stdc++.h>
using namespace std;

int countsumpair (int arr[], int n, int sum)
{
    if (n == 0)
        return sum == 0? 1:0;
    return countsumpair(arr,n-1,sum)+countsumpair(arr,n-1, sum-arr[n-1]);
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<countsumpair(arr,10,10)<<endl;
    return 0;
}
