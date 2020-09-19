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
    ll a,b,c,T;
    cin>>T;
    for(ll i=1; i<=T; i++) {
        cin>>a>>b>>c;
        if(a<=0 || b<=0 || c<=0) printf("Case %lld: Invalid\n",i);
        else if(a+b>c && b+c>a && c+a>b) {
            if(a==b && a==c) printf("Case %lld: Equilateral\n",i);
            else if(a==b || a==c || b==c) printf("Case %lld: Isosceles\n",i);
            else if(a!=b && b!=c && c!=a) printf("Case %lld: Scalene\n",i);
        } else printf("Case %lld: Invalid\n",i);
    }
    return 0;
}
