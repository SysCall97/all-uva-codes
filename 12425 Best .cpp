/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF           0x3f3f3f3f
#define el            '\n'
#define x             first
#define y             second
#define pi            acos(-1.0)
#define pb            push_back
#define mp            make_pair
#define Max           2000000
#define f(n)          n*(n+1)/2
#define all(v)        v.begin(), v.end()
#define allr(v)       v.rbegin(), v.rend()
#define mem(x,y)      memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;
bool table[Max]= {0};
ll prime[Max/10];
void sieve() {
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

ll eulerPhi(ll n) {
    ll ans=n;
    for(ll i=0; prime[i]*prime[i]<=n; ++i) if(n%prime[i]==0) {
            while(n%prime[i]==0) n/=prime[i];
            ans/=prime[i];
            ans*=(prime[i]-1);
        }
    if(n>1) {
        ans/=n;
        ans*=(n-1);
    }
    return ans;
}

int main() {
    sieve();
    ll t;
    scanf("%lld",&t);
    for(ll Case=1; Case<=t; ++Case) {
        ll n, q;
        scanf("%lld%lld",&n,&q);
        vector<ll> div, phi;
        for(ll i=1; i*i<=n; ++i) if(n%i==0) {
            div.pb(i);
            if(i*i!=n) div.pb(n/i);
        }
        sort(all(div));
        ll sz=div.size();
        for(ll i=0; i<sz; ++i) {
            phi.pb(eulerPhi(n/div[i]));
            if(i) phi[i]+=phi[i-1];
        }

        printf("Case %lld\n",Case);
        while(q--) {
            ll d;
            scanf("%lld",&d);
            if(d>=n) printf("%lld\n",n);
            else if(d<=0) printf("0\n");
            else {
                ll pos=upper_bound(all(div),d)-div.begin();
                printf("%lld\n",phi[pos-1]);
            }
        }
    }
    return 0;
}

