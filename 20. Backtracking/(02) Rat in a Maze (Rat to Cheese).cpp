#include<bits/stdc++.h>
using namespace std;

/*
Given a matrix of 1's and 0's, 0 means the step is blocked
Mouse is at 1st row and 1st column and the cheese is at last row and last column
Now find the path and print if and return true
else return false
*/

int N = 4;
bool Maze[][4] = {{1,0,0,0}, {1,1,0,1}, {0,1,0,0}, {1,1,1,1}};
bool Solution[][4] = {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}};

void Print()
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cout<<Solution[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool Issafe(int i, int j)
{
    return ((i<N && j<N && Maze[i][j] == 1));
}

bool Solverec(int i, int j)
{
    if(i == N-1 && j == N-1)
    {
        Solution[i][j] = 1;
        return true;
    }
    if(Issafe(i, j))
    {
        Solution[i][j] = 1;
        if(Solverec(i+1, j) == true)
        {
            return true;
        }
        else if(Solverec(i, j+1) == true)
        {
            return true;
        }
        Solution[i][j] = 0;
    }
    return false;
}

bool Solve()
{
    if(Solverec(0,0) == false)
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
