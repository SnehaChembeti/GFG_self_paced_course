#include<bits/stdc++.h>
using namespace std;

/*
Arrange N queen on NxN chess Board such that no queen attack another
if yes print the chess board and return true else return false
*/

int N = 4;
int Board[][4] = {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}};

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

bool Issafe(int row,int col)
{
    for(int k=0; k<N; k++)
    {
        if(Board[row][k] == 1 || Board[k][col] == 1)
        {
            return false;
        }
    }
    for(int i = row, j = col; i>=0 && j>=0; i--,j--)
    {
        if(Board[i][j] == 1)
        {
            return false;                        //Upper diagonal
        }
    }
    for(int i=row, j=col; i<N && j>=0; i++, j--)
    {
        if(Board[i][j] == 1)
        {
            return false;                        //Lower diagonal
        }
    }
    return true;
}

bool Solverec(int col)
{
    if(col == N)
    {
        return true;
    }
    for(int i=0; i<N; i++)
    {
        if(Issafe(i, col) == true)
        {
            Board[i][col] = 1;
            if(Solverec(col+1) == true)
            {
                return true;
            }
            Board[i][col] = 0;
        }
    }
    return false;
}

bool Solve()
{
    if(Solverec(0) == false)
    {
        return false;
    }
    else
    {
        Print();
        return true;
    }
}

int main()
{
    cout<<Solve()<<endl;
    return 0;
}
