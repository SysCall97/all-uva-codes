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

int IsPrime(int n) {
    for(int i=2; i*i<=n; i++) if(n%i==0)
            return 0;
    return 1;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,n,p,p1,i;
    while(scanf("%d",&n)==1) {
        c=0;
        if(n==0) break;
        else {
            for(i=2; c==0; i++) {
                a=i;
                p=IsPrime(a);
                if(p==1) {
                    b=n-a;
                    p1=IsPrime(b);
                    if(p1==1) {
                        printf("%d = %d + %d\n",n,a,b);
                        c=1;
                    }
                }
            }
        }
    }
    return 0;
}
