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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,a[3],max,min,survive;
    cin>>t;
    for(int Case=1; Case<=t; Case++) {
        max=0;
        min=10001;
        for(i=0; i<3; i++) {
            cin>>a[i];
            if(max<a[i]) max=a[i];
            if(min>a[i]) min=a[i];
        }
        for(int i=0; i<3; i++) if(max>a[i] && min<a[i])
                survive=a[i];
        printf("Case %d: %d\n",Case,survive);
    }
    return 0;
}
