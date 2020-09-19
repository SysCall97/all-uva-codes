#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll digitSum(ll n)
{
    char nmbr[20];
    ll ans=0;
    sprintf(nmbr,"%d",n);
    for(int i=0; nmbr[i]; ++i)
        ans+=nmbr[i]-'0';
    return ans;
}

bool func(ll n)
{
    ll sum1=digitSum(n),sum2=0,m=n;
    ll sq=sqrt(n);
    bool prime=true;
    for(ll i=2; i*i<=n; ++i) {
        if(!(n%i)) {
            ll cnt=0;
            while(!(n%i)) {
                n/=i;
                ++cnt;
            }
            sum2+=(cnt*digitSum(i));
            prime=false;
        }
    }
    if(n>1) sum2+=digitSum(n);
    if(sum1==sum2 && !prime) {
        printf("%lld\n",m);
        return 1;
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        for(ll i=n+1; ; ++i)
            if(func(i)) break;
    }
    return 0;
}

