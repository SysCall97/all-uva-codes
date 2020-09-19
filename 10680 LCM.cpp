#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long llu;
vector < llu > lcm;
llu gcd(llu a, llu b)
{
    while(b)
        b ^= a ^= b ^= a %= b;
    return a;
}
void LCM()
{
    llu product,n;
    lcm.push_back(2);
    lcm.push_back(6);
    for(llu i=4; i<=1000000; ++i) {
        n=gcd(lcm[i-3],i);
        product=(lcm[i-3]/n)*i;
        lcm.push_back(product);
    }
}
llu lastNonZeroDigit(llu n)
{
    while(!(n%10))
        n/=10;
    return n%10;
}
int main()
{
    LCM();
    llu n;
    while(cin>>n && n)
        printf("%llu\n",lcm[n-2]);
        ///printf("%llu\n",lastNonZeroDigit(lcm[n-2]));
    return 0;
}

