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
    char ch[1000],temp;
    long long int i,j,k,l;
    long long int I=0,F=0;
    while(gets(ch)) {
        if(ch==EOF)
            break;
        for(i=0; ch[i]!='\0'; i++) {
            if(ch[i-1]==' ' || i==0)
                I=i;
            else if(ch[i]==' ')
                continue;
            else if(ch[i+1]==' ' || ch[i+1]=='\0') {
                F=i;
                for(j=I,k=0; j<=(I+F)/2; j++,k++) {
                    temp=ch[F-k];
                    ch[F-k]=ch[j];
                    ch[j]=temp;
                }
            }
        }
        printf("%s\n",ch);
    }
    return 0;
}
