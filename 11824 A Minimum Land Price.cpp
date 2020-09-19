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
ll power(ll nmbr,ll pwr) {
    ll mul=1;
    for(ll i=0; i<pwr; i++) mul*=nmbr;
    return mul;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll T,L[44],i,j,k,temp,ans;
    scanf("%lld",&T);
    while(T--) {
        L[0]=1;
        ans=0;
        for(i=1; L[i-1]!=0; i++)
            scanf("%lld",&L[i]);
        for(j=1; j<i-1; j++) {
            for(k=j+1; k<i; k++) {
                if(L[j]<L[k]) {
                    temp=L[j];
                    L[j]=L[k];
                    L[k]=temp;
                }
            }
        }
        for(j=1; j<i; j++)
            ans+=2*power(L[j],j);

        if(ans>5000000) printf("Too expensive\n");
        else printf("%lld\n",ans);
    }
    return 0;
}
