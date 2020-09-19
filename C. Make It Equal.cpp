/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
ll cnt[int(2e6)+10];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,k,m,last=int(1e9),maxi=-10;
    cin>>n>>k;
    for(ll i=0; i<n; ++i) {
        cin>>m;
        ++cnt[m];
        last=min(last,m);
        maxi=max(maxi,m);
    }
    ll step=(last==maxi)?0:1;
    ll counter=0;
    while(maxi>last) {
        if(counter+cnt[maxi]>k) {
            counter=0;
            ++step;
        }
        counter+=cnt[maxi];
        cnt[maxi-1]+=cnt[maxi];
        cnt[maxi]=0;
        --maxi;
    }
    cout<<step<<el;
    return 0;
}
