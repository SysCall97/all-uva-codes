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

char func(char c) {
    char ch;
    if(c>=65 && c<=67) ch='2';
    else if(c>=68 && c<=70) ch='3';
    else if(c>=71 && c<=73) ch='4';
    else if(c>=74 && c<=76) ch='5';
    else if(c>=77 && c<=79) ch='6';
    else if(c>=80 && c<=83) ch='7';
    else if(c>=84 && c<=86) ch='8';
    else if(c>=87 && c<=90) ch='9';
    return ch;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char c[32],nmbr[32];
    int i;
    while(scanf("%s",&c)!=EOF) {
        for(i=0; c[i]!='\0'; i++) {
            if(c[i]=='-' || c[i]=='1' || c[i]=='0') nmbr[i]=c[i];
            else nmbr[i]=func(c[i]);
            nmbr[i+1]='\0';
        }
        printf("%s\n",nmbr);
    }
    return 0;
}


