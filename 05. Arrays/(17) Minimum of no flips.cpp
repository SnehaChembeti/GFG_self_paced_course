#include<bits/stdc++.h>
using namespace std;

//Minimum group flips to make all items same..flipping the 2nd group always flips the minimum times.
void Printgroups(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        if(arr[i] != arr[i-1])
        {
            if(arr[i] != arr[0])
                cout<<"From "<<i<<" to ";
            else
                cout<<(i-1)<<endl;
        }
    }
    if(arr[n-1] != arr[0])
        cout<<(n-1)<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    Printgroups(arr, n);
    return 0;
}
