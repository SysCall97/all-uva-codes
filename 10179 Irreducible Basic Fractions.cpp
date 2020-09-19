#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long llu;
#define Max 100000
bool table[Max]= {0};
int prime[Max/2];
void seieve()
{
    int i,j,k=4,n=Max;
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
            while(n%prime[i]==0) {
                n/=prime[i];
            }
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
int main()
{
    seieve();
    llu n;
    while(cin>>n && n)
        printf("%llu\n",(n==1)?1:eulerPhiFunction(n));

    return 0;
}
