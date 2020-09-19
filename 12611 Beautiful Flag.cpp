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
    int T,R,l,r,ul;
    cin>>T;
    for(int i=1; i<=T; i++) {
        cin>>R;
        l=(45*R)/20;
        r=(55*R)/20;
        ul=(30*R)/20;
        printf("Case %d:\n%d %d\n%d %d\n%d %d\n%d %d\n",i,-l,ul,r,ul,r,-ul,-l,-ul);
    }
    return 0;
}
