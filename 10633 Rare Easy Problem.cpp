#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long diff;
    while(scanf("%lld",&diff)==1 && diff) {
        unsigned long long ans=(diff*10)/9;
        if(diff%9) printf("%llu\n",ans);
        else printf("%llu %llu\n",ans-1,ans);
    }
    return 0;
}
