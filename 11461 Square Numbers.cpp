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
    ll a,b,count,i,ex;
    double rt;
    while(1) {
        cin>>a>>b;
        if(a==0 && b==0) break;
        else {
            count=0;
            for(i=a; i<=b; i++) {
                rt=sqrt(i);
                ex=(long long int)(rt*1000000)%1000000;
                if(ex==0)
                    count++;
            }
            printf("%lld\n",count);
        }
    }
    return 0;
}
