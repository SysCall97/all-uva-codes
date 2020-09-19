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
#define max 1000005
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
int a[max]= {0},digit_prime[max]= {0};

int digit_sum(int n) {
    int sum=0;
    while(n!=0) {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int seieve(void) {
    int i,j;
    for(i=2; i<max; i++) {
        for(j=i+i; j<max; j+=i)
            a[j]=1;
    }
}

void d_prime_count(void) {
    int i,count=1;
    digit_prime[2]=1;
    for(i=3; i<=max; i+=2) {
        if(a[i]==0 && a[digit_sum(i)]==0)
            count++;
        digit_prime[i]=digit_prime[i+1]=count;
    }
}

int main() {
    int T,a,b,p,p1,count,sum,i,j;
    seieve();
    d_prime_count();
    scanf("%d",&T);
    while(T--) {
        scanf("%d%d",&a,&b);
        printf("%d\n",digit_prime[b]-digit_prime[a-1]);
    }
    return 0;
}
