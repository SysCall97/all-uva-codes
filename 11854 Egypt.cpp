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
    long long int a,b,c,a1,a2,a3;
    while(cin>>a>>b>>c) {
        if(a==0 && b==0 && c==0) break;
        else {
            a1=(a*a)+(b*b)-(c*c);
            a2=(b*b)+(c*c)-(a*a);
            a3=(c*c)+(a*a)-(b*b);
            if(a1==0 ||a2==0 || a3==0) printf("right\n");
            else printf("wrong\n");
        }
    }
    return 0;
}
