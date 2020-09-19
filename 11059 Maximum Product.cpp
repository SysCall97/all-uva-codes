#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MAX(ll a, ll b) {return (a>b)?a:b;}
int main()
{
    ll Case=0,n;
    while(scanf("%lld",&n)==1) {
        vector<ll> numbers;
        ll m,ans=0,product=1;
        for(ll i=0; i<n; ++i) {
            scanf("%lld",&m);
            numbers.push_back(m);
        }
        for(ll i=0; i<n; ++i) {
            for(ll j=i; j<n; ++j) {
                product=1;
                for(ll k=i; k<=j; ++k) {
                    product*=numbers[k];
                }
                ans=MAX(ans,product);
            }
        }
        printf("Case #%lld: The maximum product is %lld.\n\n",++Case,ans);
        numbers.resize(0);
    }
    return 0;
}
