#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int n)
{
    int m=n,n1=0;
    while(m) {
        n1= (n1*10) + (m%10);
        m /= 10;
    }
    if(n==n1)
        return 1;
    else
        return 0;
}
bool isPrime(int n)
{
    int sq=sqrt(n);
    for(int i=2; i<=sq; i++) {
        if(!(n%i))
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    while(scanf("%d",&n)==1) {
        if(isPalindrome(n)) {
            if(isPrime(n)) {
                printf("%d\n",2*n);
                return 0;
            }
        }
        printf("%d\n",2*n);
    }

    return 0;
}

