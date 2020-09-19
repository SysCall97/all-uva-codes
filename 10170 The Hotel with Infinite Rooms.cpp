#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll s,d;
    while(scanf("%lld%lld",&s,&d)==2) {
        ll sum=0,i;
        for(i=s; sum<d; ++i)
            sum+=i;
        cout<<i-1<<'\n';
    }
    return 0;
}

