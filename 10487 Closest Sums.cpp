#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
int main()
{
    ll n,Case=0;
    while(cin>>n && n) {
        vll nmbrs;
        ll m;
        for(ll i=0; i<n; ++i) {
            cin>>m;
            nmbrs.push_back(m);
        }
        ll q;
        cin>>q;
        printf("Case %lld:\n",++Case);
        while(q--) {
            cin>>m;
            ll ans=nmbrs[0]+nmbrs[1];
            for(ll i=0; i<n; ++i) {
                for(ll j=i+1; j<n; ++j) {
                    ll val=nmbrs[i]+nmbrs[j];
                    if(abs(val-m)<abs(ans-m)) ans=val;
                }
            }
            printf("Closest sum to %lld is %lld.\n",m,ans);
        }
    }
    return 0;
}

