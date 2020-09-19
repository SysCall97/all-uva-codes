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
    ll T,a,ap,i,y;
    cin>>T;
    while(T--) {
        y=0;
        cin>>ap;
        for(ll i=1; i<5; i++) {
            cin>>a;
            if(ap+1==a) y++;
            ap=a;
        }
        if(y==4) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
