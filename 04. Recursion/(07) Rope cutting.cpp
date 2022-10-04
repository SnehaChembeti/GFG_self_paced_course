#include<bits/stdc++.h>
using namespace std;

int rope_maxcutting (int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    else if (n < 0)
        return -1;
    int res = max ({rope_maxcutting(n-a, a, b, c), rope_maxcutting(n-b, a, b, c), rope_maxcutting(n-c, a, b, c)});
    if (res == -1)
        return -1;
    return res +1;
}

int main()
{
    cout<<rope_maxcutting(8, 1, 2, 4);
    return 0;
}
