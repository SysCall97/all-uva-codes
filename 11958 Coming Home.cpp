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
    int T,K,diff,Q,min,H,M,m,t,ti,tf,i;
    char ch;
    cin>>T;
    for(int Case=1; Case<=T; Case++) {
        min=1000000;
        scanf("%d%d:%d", &K, &H, &M);
        ti=(H*60)+M;
        t=1440-ti;
        for(i=0; i<K; i++) {
            scanf("%d:%d%d", &H, &M, &m);
            tf=(H*60)+M;

            if(ti>tf) diff=tf+t+m;
            else diff=tf-ti+m;

            if(min>diff) min=diff;
        }
        printf("Case %d: %d\n",Case,min);
    }
    return 0;
}


