#include<bits/stdc++.h>
using namespace std;

void printrev (int n)
{
    if (n == 0)
        return;
    cout<<n<<" ";
    printrev(n-1);
}

int main()
{
    printrev(5);
    return 0;
}
