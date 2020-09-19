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
    long long int T,sum=0,c,i,nmbr;
    char ch[18];
    scanf("%lld",&T);
    getchar();
    while(T--) {
        gets(ch);
        if(ch[0]=='d' && ch[1]=='o' && ch[2]=='n' && ch[3]=='a' && ch[4]=='t' && ch[5]=='e') {
            nmbr=0;
            for(i=7; ch[i]!='\0'; i++) {
                c=ch[i]-'0';
                nmbr=c+10*nmbr;
            }
            sum+=nmbr;
        } else if(ch[0]=='r' && ch[1]=='e' && ch[2]=='p' && ch[3]=='o' && ch[4]=='r' && ch[5]=='t') printf("%lld\n",sum);
    }
    return 0;
}
