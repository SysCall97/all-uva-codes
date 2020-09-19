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
    long long int C,N,i,j,count,n[1010];
    double avg,abov_avg,sum;
    scanf("%lld",&C);
    for(i=0; i<C; i++) {
        count=0;
        sum=0;
        scanf("%lld",&N);
        for(j=0; j<N; j++) {
            scanf("%lld",&n[j]);
            sum+=(double)n[j];
        }
        avg=sum/(double)N;
        for(j=0; j<N; j++) {
            if((double)n[j]>avg) count++;
        }
        abov_avg=((double)count/(double)N)*100;
        printf("%0.3lf%%\n",abov_avg);
    }
    return 0;
}
