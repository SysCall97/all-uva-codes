#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long llu;
llu gcdSum[4000400];
vector < int > phi;
int mark[4000009];
void seievePhi()
{
    for(int i=0; i<4000009; ++i) phi.push_back(i);
    mark[1]=1;
    for(int i=2; i<4000009; ++i) {
        if(!mark[i]) {
            for(int j=i; j<4000009; j+=i) {
                mark[j]=1;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
}
llu func(llu n)
{
    llu sum=0,i;
    for(i=1; i*i<=n; ++i) {
        if(!(n%i)) {
            sum+=i*phi[n/i];
            sum+=(n/i)*phi[i];
        }
    }
    if((i-1)*(i-1)==n) sum-=(i-1)*phi[n/(i-1)];
    sum-=n;
    return sum;
}
void preCall()
{
    memset(gcdSum,0,sizeof(gcdSum));
    llu sum=0,prevSum=0;
    for(llu i=2; i<4000009; ++i) {
        sum=prevSum+func(i);
        prevSum=sum;
        gcdSum[i]=sum;
    }
}
int main()
{
    seievePhi();
    preCall();
    llu n;
    while(scanf("%llu",&n)==1 && n) {
        printf("%llu\n",gcdSum[n]);
    }
    return 0;
}
