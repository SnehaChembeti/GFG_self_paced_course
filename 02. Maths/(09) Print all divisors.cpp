#include<bits/stdc++.h>
using namespace std;

//Printing all divisors :
void printdivisors(int n)
{
    int i;
    for(i=1; i*i<n; i++)
        if(n%i == 0)
            cout<<i<<" ";
    for(i; i>=1; i--)
        if(n%i==0)
            cout<<n/i<<" ";
}

int main()
{
    int n;
    cin>>n;
    printdivisors(n);
    return 0;
}
