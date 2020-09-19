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
    ll a,b,c,d,L,i,counter,x,a1,b1,c1,last;
    while(cin>>a>>b>>c>>d>>L) {
        if(a==0 && b==0 && c==0 && d==0 && L==0) break;
        else {
            counter=0;
            for(x=0; x<=L; x++) {
                a1=((a%d)*(x%d)*(x%d))%d;
                b1=((b%d)*(x%d))%d;
                c1=c%d;
                last=(a1+b1+c1)%d;
                if(last==0) counter++;
            }
            cout<<counter<<el;
        }
    }
    return 0;
}
