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
    char ch[101],ch_temp;
    int G,i,j,k,l,m,l1,len;
    while(scanf("%d",&G)==1 && G!=0) {
        getchar();
        gets(ch);
        for(len=0; ch[len]!='\0'; len++);
        m=len/G;
        k=0;
        for(i=0; i<G; i++) {
            l=l1=k+m-1;
            for(j=k; j<=(k+l1)/2; j++) {
                ch_temp=ch[j];
                ch[j]=ch[l];
                ch[l]=ch_temp;
                l--;
            }
            k=l1+1;
        }
        printf("%s\n",ch);
    }
    return 0;
}
