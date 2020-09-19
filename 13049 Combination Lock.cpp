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

int function(char ch1,char ch2) {
    int difference1=0;
    difference1=ch1-ch2;
    if(difference1<0) difference1*=-1;
    if(difference1>5) difference1=10-difference1;
    return difference1;
}

int main() {
    int T,n,i,Case,steps;
    char lock1[101],lock2[101];
    scanf("%d",&T);
    for(Case=1; Case<=T; Case++) {
        steps=0;
        scanf("%d",&n);
        getchar();
        scanf("%s %s",lock1,lock2);
        for(i=n-1; i>=0; i--)
            steps+=function(lock1[i],lock2[i]);
        printf("Case %d: %d\n",Case,steps);
    }
    return 0;
}
