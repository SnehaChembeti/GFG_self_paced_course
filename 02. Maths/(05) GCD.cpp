#include<bits/stdc++.h>
using namespace std;

//HCF of two numbers :
int GCD(int a, int b)
{
    int res = min(a, b);
    while(1){
        if(a%res == 0 && b%res == 0)
            break;
        res--;
    }
    return res;
}

//Euclidean algorithm : gcb(a, b) == gcb(a-b, b);
int GCFeu(int a, int b)
{
    if(b==0)
        return a;
    return GCFeu(b, a%b);
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<GCFeu(a, b)<<endl;
    return 0;
}
