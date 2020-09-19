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
    int T,jump,height,pj,countH,countL;
    cin>>T;
    for(ll Case=1; Case<=T; Case++) {
        cin>>jump>>pj;
        countH=countL=0;
        for(ll i=1; i<jump; i++) {
            cin>>height;
            if(pj<height) countH++;
            else if(pj>height) countL++;
            pj=height;
        }
        printf("Case %d: %d %d\n",Case,countH,countL);
    }
    return 0;
}
