#include<bits/stdc++.h>
using namespace std;

//Palindrome check :
bool IsPalindrome(int n)
{
    int rev = 0, temp = n;
    while (temp > 0){
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    return (rev == n);
}

int main()
{
    int n;
    cin>>n;
    cout<<IsPalindrome(n)<<endl;
    return 0;
}
