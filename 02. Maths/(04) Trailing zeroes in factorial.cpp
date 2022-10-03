#include<bits/stdc++.h>
using namespace std;

//Trailing zeroes in factorial :

int counttrailingzeroes(int n)
{
    int res = 0;
    for(int i=5; i<=n; i *= 5)     //O(log5(n) , O(1)
        res += n/i;                // no.of 5's <= no of 2's
    return res;
}

int main()
{
    int n;
    cin>>n;
    cout<<counttrailingzeroes(n)<<endl;
    return 0;
}
