#include<bits/stdc++.h>
using namespace std;

// Largest element in the array :
int greatestele(int arr[], int n)
{
    int mx = 0;
    for(int i=1; i<n; i++)
        if(arr[i] > arr[mx])         //O(n) , O(1)
            mx = i;
    return mx;
}

//Second largest element :
int secondlargest (int arr[], int n)
{
    int largest = 0, res = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > arr[largest])
        {
            res = largest;          //O(n) , O(1)
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if(res == -1 || arr[i] > arr[res])
                res = i;
        }
    }
    return res;
}

//Chcek if an array sorted :
bool issorted(int arr[], int n)
{
    for(int i=1; i<n; i++)
        if(arr[i-1] > arr[i])     //O(n) , O(1)
            return false;
    return true;
}

//Reverse an array :

void Reversearray(int arr[], int n)
{
    int low = 0, high = n-1;
    while(low < high)
    {
        swap(arr[low], arr[high]);      //O(n) , O(1)
        low++;
        high--;
    }
}

//Print an array :
void printarray(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<greatestele(arr,n)<<endl;
    cout<<secondlargest(arr, n)<<endl;
    cout<<issorted(arr, n)<<endl;
    Reversearray(arr, n);
    printarray(arr, n);
    return 0;
}
