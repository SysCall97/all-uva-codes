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
    int T,i;
    double c,f,C,F;
    scanf("%d",&T);
    for(i=1; i<=T; i++) {
        scanf("%lf%lf",&c,&f);
        F=((9*c)/5)+32;
        f=f+F;
        C=(5*(f-32))/9;
        printf("Case %d: %0.2lf\n",i,C);
    }
    return 0;
}
