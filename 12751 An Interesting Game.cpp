#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum(ll n)
{
    ll m=n+1;
    if(m%2)n/=2;
    else m/=2;
    return n*m;
}
int main()
{
    ll T;
    cin>>T;
    for(ll Case=1; Case<=T; ++Case) {
        ll N,K,X;
        cin>>N>>K>>X;
        ll n,m;
        cout<<"Case "<<Case<<": "<<sum(N)-sum(K+X-1)+sum(X-1)<<'\n';
    }
    return 0;
}
