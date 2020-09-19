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
    int N,arr[1010],ans,i,j=1,count;
    while(scanf("%d",&N)==1 && N!=0) {
        count=0;
        for(i=0; i<N; i++) {
            scanf("%d",&arr[i]);
            if(arr[i]==0) count++;
        }
        ans=N-2*count;
        printf("Case %d: %d\n",j,ans);
        j++;
    }
    return 0;
}
