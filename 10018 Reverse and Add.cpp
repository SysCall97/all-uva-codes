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
    long long int N,P,p,add,rev,count;
    cin>>N;
    while(N--) {
        count=0;
        scanf("%lld",&P);
        while(1) {
            p=P;
            rev=0;
            while(p!=0) {
                rev=rev*10+(p%10);
                p/=10;
            }
            if(P==rev) {
                printf("%lld %lld\n",count,P);
                break;
            } else {
                add=P+rev;
                P=add;
                count++;
            }
        }
    }
    return 0;
}
