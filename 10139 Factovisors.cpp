#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define Max 100000
bool table[Max]= {0};
ll prime[Max/2];

void seieve()
{
    ll i,j,k=4,n=Max;
    for(i=5; i*i<=n; i+=k) {
        for(j=2*i; j<=n; j+=i) {
            table[j]=1;
        }
        k=(k==2)?4:2;
    }
    k=4;
    for(i=5,j=2; i<=n; i+=k) {
        if(table[i]==0) {
            prime[j]=i;
            j++;
        }
        k=(k==2)?4:2;
    }
    prime[0]=2,prime[1]=3;
}

bool isDivisible(ll n, ll m)
{
    if ((n==0 && m<2)|| (n>=m)) return 1;

    for(ll i=0; prime[i]*prime[i]<=m; ++i) {
        if(!(m%prime[i])) {
            ll cnt1=0,cnt2=0,n1=n;
            while(!(m%prime[i])) {
                m/=prime[i];
                ++cnt1;
            }
            while(n1) {
                cnt2+=n1/prime[i];
                n1=n1/prime[i];
            }
            if(cnt1>cnt2) return 0;
        }
    }
    if(m>n) return 0;
    return 1;
}

int main()
{
    seieve();
    ll n,m;
    while(cin>>n>>m)
        if(isDivisible(n,m)) printf("%lld divides %lld!\n",m,n);
        else printf("%lld does not divide %lld!\n",m,n);

    return 0;
}

