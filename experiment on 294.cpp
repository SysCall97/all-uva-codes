#include<bits/stdc++.h>
using namespace std;
#define Max 33000
typedef long long ll;
ll MAX(ll a, ll b){return (a>b)?a:b;}
ll divisors[101110];
int table[Max];
ll prime[Max/2];
void seieve()
{
    memset(table,0,Max);
    ll i,j,k=4,n=Max;
    for(i=5; i*i<=n; i+=k) {
        for(j=2*i; j<=n; j+=i) {
            table[j]=1;
        }
        if(k==2) k=4;
        else k=2;
    }
    k=4;
    for(i=5,j=2; i<=n; i+=k) {
        if(table[i]==0) {
            prime[j]=i;
            j++;
        }
        if(k==2) k=4;
        else k=2;
    }
    prime[0]=2,prime[1]=3;
}
bool isPrime(ll n)
{
    ll low=0,found=0;
    ll high=Max-1,mid;
    while(low<=high) {
        mid=(low+high)/2;
        if(prime[mid]>n) high=mid-1;
        else if(prime[mid]<n) low=mid+1;
        else return 1;
    }
    return 0;
}

ll numberOfDivisors(ll n)
{
    if(isPrime(n))
        return 2;
    ll sq=sqrt(n),ans=1;
    for(ll i=0; prime[i]<=sq; ++i) {
        if(!(n%prime[i])) {
            ll counter=0;
            while(!(n%prime[i])) {
                counter++;
                n/=prime[i];
            }
            ans*=(counter+1);
        }
    }
    if(n>1) ans*=2;
    return ans;
}

void func(ll L, ll U)
{
    ll m,k=0;
    for(ll i=L; i<=U; ++i) {
        m=numberOfDivisors(i);
        divisors[k++]=m;
    }
}
int main()
{
    seieve();
    ll t;
    scanf("%lld",&t);
    while(t--) {
        memset(divisors,0,10111);
        ll L,U,ans=0,ans2=0;
        scanf("%lld%lld",&L,&U);
        func(L,U);
        for(ll i=0; i<=U-L; ++i) {
            ll prev_ans=ans;
            ans=MAX(ans,divisors[i]);
            ans2=(prev_ans!=ans)?i+L:ans2;
            ///printf("%lld %lld\n",i+L,divisors[i]);
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",L,U,ans2,ans);
    }
    return 0;
}
