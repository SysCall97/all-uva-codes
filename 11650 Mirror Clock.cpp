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
    int T,H,M,i;
    char ch[7];
    scanf("%d",&T);
    getchar();
    while(T--)
    {
        gets(ch);
        H=10*(ch[0]-48)+(ch[1]-48);
        M=10*(ch[3]-48)+(ch[4]-48);
        M=60-M;
        if(H!=12) H=12-H;
        if(M==60) M=0;
        if(M>0) H=H-1;
        if(H==0) H=12;
        ch[1]=(H%10)+48;
        ch[0]=(H/10)+48;
        ch[4]=(M%10)+48;
        ch[3]=(M/10)+48;
        printf("%s\n",ch);
    }
    return 0;
}

