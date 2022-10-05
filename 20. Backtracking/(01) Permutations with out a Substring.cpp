#include<bits/stdc++.h>
using namespace std;

// prints all permutations which do not contains "AB" as substring

bool issafe(string str, int i, int l, int r)
{
    if((l != 0 && str[l-1] == 'A' && str[i] == 'B')||(r == l+1 && str[l] == 'B' && str[i] == 'A'))
    {
        return false;
    }
    return true;
}

void permute(string str, int l, int r)
{
    if(l == r)
    {
        cout<<str<<endl;
        return;
    }
    else
    {
        for(int i=l; i<=r; i++)
        {
            if(issafe(str, i, l, r))
            {
                swap(str[l], str[i]);
                permute(str, l+1, r);
                swap(str[l], str[i]);
            }
        }
    }
}

int main()
{
    string str;
    //cin>>str;
    str = "ABC";
    permute(str, 0, str.length()-1);
    return 0;
}
