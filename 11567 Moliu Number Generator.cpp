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
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    ll n;
    while(cin>>n) {
        if(n==0 || n==1 ||n==2 || n==3) cout<<n<<el;
        else if(n!=0 && (n&(n-1))==0) {
            ll ans,po=1;
            for(int i=1; i<32; ++i) {
                po*=2;
                if(po==n) {
                    ans=i+1;
                    break;
                }
            }
            cout<<ans<<el;
        } else {
            ll low,high,ans,po=1;
            for(int i=1; i<32; ++i) {
                po*=2;
                if(po>n) {
                    high=i;
                    break;
                }
            }
            low=high-1;
            if(abs(n-pow(2,low))<abs(pow(2,high)-n)) ans=low+1+abs(n-pow(2,low));
            else if(abs(n-pow(2,low))==abs(pow(2,high)-n)) ans=high+abs(n-pow(2,low));
            else ans=high+1+abs(pow(2,high)-n);
            cout<<ans<<el;
        }
    }
    return 0;
}


