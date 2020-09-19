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
int div(int x) {
    int  c=1;
    while(1) {
        if(x==1) break;
        else if(x%2==0) x=x/2;
        else if(x%2==1) x=3*x+1;
        c++;
    }
    return c;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int  a,b,r,i,d,ans,t,p,q;
    while(scanf("%d%d",&a,&b)!=EOF) {
        d=1;
        p=a;
        q=b;
        if(a>b) {
            t=a;
            a=b;
            b=t;
        }
        for(i=a; i<=b; i++) {
            r=div(i);
            if(r>d) {
                ans=r;
                d=r;
            } else ans=d;
        }
        printf("%d %d %d\n",p,q,ans);
    }
    return 0;
}
