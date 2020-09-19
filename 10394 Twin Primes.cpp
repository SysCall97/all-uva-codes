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
#define max 20000000
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
int a[max]= {0},array[max]= {0},ct[max]= {0};

int seieve() {
    int i,j;
    a[0]=a[1]=1;
    for(i=4; i<max; i+=2)
        a[i]=1;
    for(i=3; i<max; i+=2) {
        for(j=i+i; j<max; j+=i)
            a[j]=1;
    }
}

int func() {
    int i,j=0;
    for(i=2; i<max; i++) {
        if(a[i]==0) {
            array[j]=i;
            j++;
        }
    }
    int k=1;
    for(i=1; i<j; i++) {
        if(array[i]-array[i-1]==2)
            ct[k++]=i;
    }
}

int main() {
    seieve();
    func();
    int n,i,count;
    while(scanf("%d",&n)==1) {
        printf("(%d, %d)\n",array[ct[n]-1],array[ct[n]]);
    }
    return 0;
}
