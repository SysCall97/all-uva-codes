#include<bits/stdc++.h>

using namespace std;
long long big_mod(long long n, long long p, long long mod)
{
    if(p==0) return 1;
    if(p & 1) return ((n%mod) * (big_mod(n, p-1, mod) % mod)) % mod;
    else {
        long long ans = (big_mod(n, p>>1, mod) % mod);
        return (ans * ans) % mod;
    }
}
int main()
{
    long long n,p,mod,l;
    while(scanf("%lld",&l)==1 && l) {
        while (l--) {
            scanf("%lld%lld%lld",&n,&p,&mod);
            printf("%lld\n",big_mod(n,p,mod));
        }
    }
    return 0;
}
