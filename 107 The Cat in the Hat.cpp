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
const ll MOD = 1000000007;
const int MAX = 2003;
bool IsPrime(ll number) {
    if(number==1) return false;
    for(ll i=2; i*i<=number; i++) if(!(number%i))
            return false;
    return true;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll h,w;
    while(cin>>h>>w) {
        if(!h && !w) break;
        else if(h==1 && w==1) {
            cout<<0<<" "<<1<<el;
        } else {
            ll n=1,hi=h,c=0,cnt=0;
            if(IsPrime(w)) {
                n=w;
                for(ll i=2; i*i<=hi; ++i) {
                    while(hi%i==0) hi/=i,cnt++;
                    c=cnt-1;
                    cnt=0;
                }
            } else {
                for(ll i=2; i*i<=hi; ++i) {
                    if(hi%i==0) n*=i;
                    while(hi%i==0) hi/=i,cnt++;
                    c=cnt-1;
                    cnt=0;
                }
                if(hi) n*=hi;
                --n;
            }
            ll nwc=1,hei=h+w,N=n;
            h/=(n+1);
            for(ll i=1; i<=c; ++i) {
                nwc+=N;
                hei+=(N*h);
                N*=n;
                h/=(n+1);
            }
            cout<<nwc<<" "<<hei<<el;
        }
    }

    return 0;
}
