#include<bits/stdc++.h>
using namespace std;

//Printing all prime numbers less than n
void sieve(int n)
{
    vector<int>isPrime(n+1, true);
    isPrime[1] = false;
    for(int i=2; i<n; i++)
    {
        if(isPrime[i]){
            cout<<i<<" ";               //O(n*log(log(n))
            for(int j= i*i; j<n; j+=i)
                isPrime[j] = false;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    sieve(n);
    return 0;
}
