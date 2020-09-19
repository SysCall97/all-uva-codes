#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll player[510];
int main()
{
    ll j,r;
    while(cin>>j>>r) {
        memset(player,0,sizeof player);
        ll m,maximum=0,ans;
        for(ll i=0; i<r; ++i) {
            for(ll k=0; k<j; ++k) {
                cin>>m;
                player[k]+=m;
            }
        }
        for(ll i=0; i<j; ++i) {
            if(maximum<=player[i]) {
                maximum=player[i];
                ans=i+1;
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}

