#include<bits/stdc++.h>
using namespace std;

/*
We are given a partially filled matrix, 0's represents the empty boxes
Rules : 1. Every number in every row sud be different
        2. Every number in every col sud be different
        3. Every number in every sub-board or sub-grid also be differrent
if yes then print the board elements and return true else return false
*/

int N = 4;
int Board[][4] = {{1,0,3,0}, {0,0,2,1}, {0,1,0,2}, {2,4,0,0}};

void Print()
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cout<<Board[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool Issafe(int i, int j, int n)
{
    for(int k=0; k<N; k++)
    {
        if((Board[i][k] == n) || (Board[k][j] == n))
        {
            return false;
        }
    }
    int s = sqrt(N);
    int rs = i - i%s;
    int cs = j - j%s;
    for(i=0; i<s; i++)
    {
        for(j=0; j<s; j++)
        {
            if(Board[i+rs][j+cs] == n)
            {
                return false;
            }
        }
    }
    return true;
}

bool Solve()
{
    int i, j, a =0;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(Board[i][j] == 0)
            {
                a = 1;
                break;
            }
        }
        if(a == 1)
        {
            break;
        }
    }
    if(i == N && j == N)
    {
        return true;
    }
    for(int n = 1; n<=N; n++)
    {
        if(Issafe(i, j, n) == true)
        {
            Board[i][j] = n;
            if(Solve() == true)
            {
                return true;
            }
            Board[i][j] = 0;
        }
    }
    return false;
}

int main()
{
    cout<<Solve()<<endl;
    Print();
    return 0;
}
