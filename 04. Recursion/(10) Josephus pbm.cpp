#include<bits/stdc++.h>
using namespace std;

int jos (int n, int k)
{
    if (n == 1)
        return 0;
    else
        return (jos (n-1,k)+k)%n;
}

int Myjos (int n, int k)
{
    return jos(n,k) + 1;
}

int main()
{
    cout<<Myjos(5,3)<<endl;
    return 0;
}
