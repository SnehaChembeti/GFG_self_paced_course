#include<bits/stdc++.h>
using namespace std;

void subsets (string str, string curr = "", int i = 0)
{
    if (i == str.length())
    {
        cout<<curr<<endl;
        return;
    }
    subsets (str, curr, i+1);
    subsets (str, curr+str[i], i+1);
}

int main()
{
    string str = "abc";
    subsets(str);
    return 0;
}
