#include<bits/stdc++.h>
using namespace std;

//LCM of two numbers :
int LCM(int a, int b)
{
    int res = max(a,b);
    while(1){
        if(res%a == 0 && res%b == 0)
            break;
        res++;
    }
    return res;
}

//By using hcf (lcm*lcf) = a*b
int GCFeu(int a, int b)
{
    if(b==0)
        return a;
    return GCFeu(b, a%b);
}

int LCMeu(int a, int b)
{
    return (a*b)/GCFeu(a,b);
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<LCMeu(a, b)<<endl;
    return 0;
}
