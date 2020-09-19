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
    int H1,H2,M1,M2,min1,min2,total;
    while(cin>>H1>>M1>>H2>>M2) {
        if(H1==0 && M1==0 && H2==0 && M2==0) break;

        min1=(H1*60)+M1;
        min2=(H2*60)+M2;
        if(min1>min2) {
            min1=(24*60)-min1;
            total=min1+min2;
        } else total=min2-min1;
        cout<<total<<el;
    }
    return 0;
}
