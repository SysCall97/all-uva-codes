#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long llu;
llu gcdSum[200400];
#define Max 400000
bool table[Max]= {0};
llu prime[Max];
void seieve()
{
    llu i,j,k=4,n=Max;
    for(i=5; i*i<=n; i+=k) {
        for(j=2*i; j<=n; j+=i) {
            table[j]=1;
        }
        k=(k==2)?4:2;
    }

    k=4;
    for(i=5,j=2; i<=n; i+=k) {
        if(table[i]==0)
            prime[j++]=i;
        k=(k==2)?4:2;
    }
    prime[0]=2,prime[1]=3;
}
llu eulerPhiFunction(llu n)
{
    llu res=n,sq=sqrt(n)+1;
    for(llu i=0; prime[i]<=sq; i++) {
        if(n%prime[i]==0) {
            while(n%prime[i]==0)
                n/=prime[i];

            res/=prime[i];
            res*=(prime[i]-1);
            sq=sqrt(n);
        }
    }
    if(n>1) {
        res/=n;
        res*=(n-1);
    }
    return res;
}
llu func(llu n)
{
    llu sum=0;
    llu sq=sqrt(n);
    for(llu i=1; i<=sq; ++i) {
        if(!(n%i)) {
            sum+=i*eulerPhiFunction(n/i);
            sum+=(n/i)*eulerPhiFunction(i);
        }
    }
    if(sq*sq==n) sum-=sq*eulerPhiFunction(n/sq);
    sum-=n;
    return sum;
}
void preCall()
{
    memset(gcdSum,0,sizeof(gcdSum));
    llu sum=0,prevSum=0;
    for(llu i=2; i<200100; ++i) {
        sum=prevSum+func(i);
        prevSum=sum;
        gcdSum[i]=sum;
    }
}
int main()
{
    seieve();
    preCall();
    llu n;
    while(scanf("%llu",&n)==1 && n) {
        printf("%llu\n",gcdSum[n]);
    }
    return 0;
}
