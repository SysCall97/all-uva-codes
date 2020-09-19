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
    ll L,W,H,T;
    cin>>T;
    for(ll i=1; i<=T; i++) {
        cin>>L>>W>>H;
        if(L<21 && W<21 && H<21) printf("Case %d: good\n",i);
        else printf("Case %d: bad\n",i);
    }
    return 0;
}
