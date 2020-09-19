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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T,N,nmbr_of_cll[22],noc,mi,ju,M,J;
    cin>>T;
    for(ll i=1; i<=T; i++) {
        M=J=mi=ju=0;
        cin>>N;
        for(ll j=0; j<N; j++) cin>>nmbr_of_cll[j];
        for(ll k=0; k<N; k++) {
            noc=nmbr_of_cll[k];
            for(ll j=1; ; j++) {
                if(noc<j*30 && mi==0) {
                    mi=10*j;
                    M+=mi;
                }
                if(noc<j*60 && ju==0) {
                    ju=15*j;
                    J+=ju;
                }
                if(mi!=0 && ju!=0) {
                    mi=ju=0;
                    break;
                }
            }
        }
        if(M<J) printf("Case %d: Mile %d\n",i,M);
        else if(J<M) printf("Case %d: Juice %d\n",i,J);
        else printf("Case %d: Mile Juice %d\n",i,M);
    }
    return 0;
}
