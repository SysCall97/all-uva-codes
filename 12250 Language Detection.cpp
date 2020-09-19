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
    int len,i=0;
    char ch[15];
    while(++i) {
        gets(ch);
        if(ch[0]=='#') break;
        else {
            if(ch[0]=='Z' && ch[1]=='D' && ch[2]=='R' && ch[3]=='A' && ch[4]=='V' && ch[5]=='S' && ch[6]=='T' && ch[7]=='V' && ch[8]=='U' && ch[9]=='J' && ch[10]=='T' && ch[11]=='E')
                printf("Case %d: RUSSIAN\n",i);
            else if(ch[0]=='B' && ch[1]=='O' && ch[2]=='N' && ch[3]=='J' && ch[4]=='O' && ch[5]=='U' && ch[6]=='R')
                printf("Case %d: FRENCH\n",i);
            else if(ch[0]=='H' && ch[1]=='E' && ch[2]=='L' && ch[3]=='L' & ch[4]=='O')
                printf("Case %d: ENGLISH\n",i);
            else if(ch[0]=='H' && ch[1]=='A' && ch[2]=='L' && ch[3]=='L' & ch[4]=='O')
                printf("Case %d: GERMAN\n",i);
            else if(ch[0]=='H' && ch[1]=='O' && ch[2]=='L' && ch[3]=='A')
                printf("Case %d: SPANISH\n",i);
            else if(ch[0]=='C' && ch[1]=='I' && ch[2]=='A' && ch[3]=='O')
                printf("Case %d: ITALIAN\n",i);
            else
                printf("Case %d: UNKNOWN\n",i);
        }
    }
    return 0;
}
