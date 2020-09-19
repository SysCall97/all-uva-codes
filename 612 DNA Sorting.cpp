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
#define all(v)        v.begin(), v.end()
#define allr(v)       v.rbegin(), v.rend()
#define mem(x,y)      memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll m;
    cin>>m;
    while(m--) {
        ll sz, n;
        cin>>sz>>n;
        string inp[n];
        for(ll i=0; i<n; ++i) cin>>inp[i];
        vector<PI> pos;
        map<char, ll> mp;

        //calculation
        for(ll i=0; i<n; ++i) {
            ll cnt = 0;
            mp['A'] = 0, mp['C'] = 0, mp['G'] = 0, mp['T'] = 0;
            for(ll j=sz-1; j>=0; --j) {
                ++mp[inp[i][j]];
                if(inp[i][j]=='C') cnt += mp['A'];
                else if(inp[i][j]=='G') cnt += mp['A'] + mp['C'];
                else if(inp[i][j]=='T') cnt += mp['A'] + mp['C'] + mp['G'];
            }
            pos.push_back({cnt, i});
        }

        sort(all(pos));
        for(ll i=0; i<n; ++i) cout<<inp[pos[i].second]<<el;
        if(m!=0) cout<<el;
    }
    return 0;
}

