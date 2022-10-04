#include<bits/stdc++.h>
using namespace std;

bool checkp (string str, int start, int last)
{
    if (start >= last)
        return true;
    return (str[start] == str[last] && checkp(str, start +1, last -1));
}

int main()
{
    string str ="ababcaba";
    cout<<checkp(str, 0, str.length()-1);
    return 0;
}
