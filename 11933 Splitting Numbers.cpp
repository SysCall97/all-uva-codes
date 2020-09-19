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

ll power(ll nmbr) {
    ll mul=1;
    for(ll i=0; i<nmbr; i++)
        mul*=2;
    return mul;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,i,r,a,b,count;
    while(scanf("%lld",&n)==1 && n!=0) {
        a=b=0;
        count=1;
        for(i=0; n!=0; i++) {
            r=n%2;
            n/=2;
            if(r==1) {
                if(count%2==1) a+=power(i);
                else b+=power(i);
                count++;
            }
        }
        printf("%lld %lld\n",a,b);
    }
    return 0;
}
