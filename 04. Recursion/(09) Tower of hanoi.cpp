#include<bits/stdc++.h>
using namespace std;

void TOH (int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout<<"move 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    TOH (n-1, A, C, B);
    cout<<"move "<<n<<" from "<<A<<" to "<<C<<endl;      //O(2^n-1)
    TOH (n-1, B, A, C);
}

int main()
{
    TOH (3, 'A', 'B', 'C');
    return 0;
}
