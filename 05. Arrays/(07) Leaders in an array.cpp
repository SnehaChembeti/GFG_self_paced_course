#include<bits/stdc++.h>
using namespace std;

//Printing leaders in an array :
void printleaders(int arr[], int n)f
{
    int curr_max = arr[n-1];
    cout<<curr_max<<" ";
    for(int i=n-2; i>=0; i--)
    {
        if(curr_max < arr[i]){
            curr_max = arr[i];
            cout<<curr_max<<" ";
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    printleaders(arr, n);
    return 0;
}
