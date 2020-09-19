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

int IsPrime(int n) {
    int rt=(int)sqrt(n),i;
    for(i=2; i<=rt; i++) {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int func(char ch) {
    if(ch>=65 && ch<=90)
        return ch-38;
    else if(ch>=97 && ch<=122)
        return ch-96;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char str[21];
    int sum,i;
    while(scanf("%s",str)!=EOF) {
        sum=0;
        for(i=0; str[i]!='\0'; i++) {
            sum+=func(str[i]);
        }
        if(IsPrime(sum)) printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }
    return 0;
}
