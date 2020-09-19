#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        long long g,l;
        cin>>g>>l;
        if(l%g) printf("-1\n");
        else printf("%lld %lld\n",g,l);
    }
    return 0;
}
