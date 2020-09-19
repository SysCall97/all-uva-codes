#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
unsigned long long power(unsigned long long a, unsigned long long b)
{
    unsigned long long ans=1,i;
    for(i=1; i<=b; ++i)
        ans*=i;
    return ans;
}
unsigned long long sumOfDigitsFrom1ToN(unsigned long long n)
{
    if (!n)
        return 0;
    unsigned long long d = log10((double)n),sum=0;
    unsigned long long *a = new unsigned long long[d+1];
    a[0] = 0, a[1] = 45;
    for (ll i=2; i<=d; i++)
        a[i] = a[i-1]*10 + 45*power(10,i-1);
    unsigned long long p = power(10, d);

    ll msd = n/p;
    while(n>=10) {
        sum=msd*a[d] + (msd*(msd-1)/2)*p + msd*(1+n%p);
        n=n%p;
        d-=1,p/=10;
        msd=n/p;
    }
    sum+=(n*(n+1)/2);
    delete(a);
    return sum;
}
int main()
{
    unsigned long long a,b;
    while (1) {
        cin>>a>>b;
        if(!a && !b)
            return 0;
        printf("%llu\n",sumOfDigitsFrom1ToN(b)-sumOfDigitsFrom1ToN(a-1));
    }
    return 0;
}

