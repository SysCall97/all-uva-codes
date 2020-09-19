#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--) {
        ll L,U,ans1=0,ans2;
        scanf("%lld%lld",&L,&U);
        for(ll i=L; i<=U; ++i) {
            ll sq=sqrt(i),counter=0;
            for(ll j=1; j<=sq; ++j) {
                if(!(i%j)) {
                    counter+=2;
                }
            }
            if(sq*sq==i)
                counter-=1;
            if(counter>ans1) {
                ans1=counter;
                ans2=i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",L,U,ans2,ans1);
    }
    return 0;
}
