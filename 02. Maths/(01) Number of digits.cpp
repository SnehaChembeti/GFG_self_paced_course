#include<bits/stdc++.h>
using namespace std;

//Counting number of digits :

//iterative :
int countdigits(int n)
{
    int count = 0;
    while(n > 0){
        count++;
        n /= 10;
    }
    return count;
}

//Recursive :
int countdigitsr(int n)
{
    if(n == 0)
        return 0;
    return countdigitsr(n/10) + 1;
}

//Logarithm :
int countdigitsL(int n)
{
    return floor(log10(n)+1);
}

int main()
{
    int n;
    cin>>n;
    cout<<countdigitsr(n)<<endl;
    return 0;
}
