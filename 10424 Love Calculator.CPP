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

int alp_nmbr(char ch) {
    if(ch>64 && ch<91)
        return (ch-64);
    else if(ch>96 && ch<123)
        return (ch-96);
    else
        return 0;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char name1[30],name2[30];
    int i,n1,n2,r,sum;
    double love;
    while(scanf("%[^\n]",name1)!=EOF) {
        n1=n2=r=sum=0;
        getchar();
        gets(name2);

        for(i=0; name1[i]!='\0'; i++)
            n1+=alp_nmbr(name1[i]);

        for(i=0; name2[i]!='\0'; i++)
            n2+=alp_nmbr(name2[i]);

        while(n1>9) {
            sum=0;
            for(i=0; n1!=0; i++) {
                r=n1%10;
                sum+=r;
                n1=n1/10;
            }
            n1=sum;
        }
        while(n2>9) {
            sum=0;
            for(i=0; n2!=0; i++) {
                r=n2%10;
                sum+=r;
                n2=n2/10;
            }
            n2=sum;
        }

        if(n1>n2)
            love=((double)n2/(double)n1)*100;
        else
            love=((double)n1/(double)n2)*100;
        printf("%0.2lf %%\n",love);

    }
    return 0;
}
