#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Max 1000000
#define scan1(n) scanf("%lld",&n)
#define scan2(n,m) scanf("%lld%lld",&n,&m)
#define printi1(n) printf("%lld\n",n)
#define printi2(n,m) printf("%lld %lld\n",n,m)
#define fori(a,b) for(long long i=a; i<=b; ++i)
#define ford(a,b) for(ll i=a; i>=b; --i)
#define nl puts("")
ll arr[110];
ll int gcd(ll a, ll b)
{
    while(b)
        b ^= a ^= b ^= a %= b;
    return a;
}
int main()
{
    ll n,m;
    while(scan2(n,m)!=EOF) {
        if(!n && !m) return 0;
        ll a=m,b=(n-m),ans=1;
        ll maximum=(a>b)?a:b;
        ll minimum=(a<b)?a:b;

        fori(1,n) {
            if(i<=maximum) arr[i]=1;
            else arr[i]=i;
        }

        ++maximum;
        while(minimum>1) {
            ll mini=minimum;
            ford(n,maximum) {
                ll GCD=gcd(arr[i],mini);
                if(GCD>1) {
                    arr[i]/=GCD;
                    mini/=GCD;
                }
                if(mini==1)
                    break;
            }
            --minimum;
        }
        fori(maximum,n) ans*=arr[i];
        printf("%lld things taken %lld at a time is %lld exactly.\n",n,m,ans);
    }
    return 0;
}
