#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    while(scanf("%lld%lld",&n,&k)==2) {
        if(!n && !k) return 0;
        ll ans=(k==1)?1:n+1,prev;
        for(ll i=3; i<=k; ++i) {
            prev=ans;
            for(ll j=1; j<=n; ++j) {
                ans+=(prev-j);
            }
        }
        printf("%lld\n",ans);
    }

    return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//int main()
//{
//    ll cnt=0;
//    for(ll i=0; i<30; ++i) {
//        for(ll j=0; j<30; ++j) {
//            for(ll k=0; k<30; ++k) {
//                for(ll l=0; l<30; ++l) {
//                    if(i+j+k+l==29)
//                        ++cnt;
//                }
//            }
//        }
//    }
//    printf("%d\n",cnt);
//    return 0;
//}
