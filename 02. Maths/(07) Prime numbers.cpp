#include<bits/stdc++.h>
using namespace std;

//Checking prime number :

//naive :
bool isprime1(int n)
{
    if(n==1 || n==0)
        return false;
    for(int i=2; i<n; i++)        //O(n)
        if(n%i == 0)
            return false;
    return true;
}

//efficient :
bool isprime2(int n)
{
    if(n == 1 || n == 0)
        return false;
    for(int i=2; i*i <= n; i++)
        if(n%i == 0)             //O(n^1/2)
            return false;
    return true;
}

//More efficient :
bool isprime3(int n)
{
    if(n==2 || n==3)
        return true;
    if(n==1 || n%2 == 0 || n%3 == 0 || n == 0)
        return false;
    for(int i=5; i*i<=n; i+=6)      //O(n^1/2) less than this
        if(n%i==0 || n%(i+2)==0)
            return false;
    return true;
}

int main()
{
    int n;
    cin>>n;
    cout<<isprime3(n)<<endl;
    return 0;
}
