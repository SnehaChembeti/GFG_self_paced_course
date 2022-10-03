#include<bits/stdc++.h>
using namespace std;

//Factorial of a number :

//iterative :
int factorial(int n)
{
    int res = 1;
    for(int i=2; i<=n; i++)
        res *= i;
    return res;
}

//Recursive :
int factorialr(int n)
{
    if(n==0)
        return 1;
    return n*factorial(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<factorialr(n)<<endl;
    return 0;
}
