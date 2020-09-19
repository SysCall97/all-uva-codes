/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define x first
#define y second
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, Case=1;
    cin>>n;
    cin.ignore();
    while(n--) {
        string inp, letters="";
        getline(cin,inp);
        for(ll i=0; inp[i]; ++i) if(inp[i]>='a' && inp[i]<='z')
            letters += inp[i];
        ll sz=letters.size(),sq=sqrt(sz);
        if(sq*sq!=sz) cout<<"Case #"<<Case<<":\n"<<"No magic :("<<el;
        else {
            bool b=1;
            for(ll i=0; i<sz/2 && b; ++i) if(letters[i]!=letters[sz-1-i]) {
                    cout<<"Case #"<<Case<<":\n"<<"No magic :("<<el;
                    b=0;
            }
            if(b) cout<<"Case #"<<Case<<":\n"<<sq<<el;
        }
        ++Case;
    }
    return 0;
}
