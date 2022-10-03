#include<bits/stdc++.h>
using namespace std;

//computing power of a number;

//iterative :
int compower(int a, int b)
{
    int res = 1;
    while(b > 0){
        if(b&1)
            res = res*a;      //O(logb), O(1)
        a = a*a;
        b /= 2; //b>>1
    }
    return res;
}

//recursive :
int compowerr(int a, int b)
{
    if(b==0)                 //O(logb), o(logb)
        return 1;
    int temp = compowerr(a, b/2);
    temp = temp*temp;
    if(b%2 == 0)
        return temp;
    return temp*a;
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<compowerr(a, b)<<endl;
    return 0;
}
