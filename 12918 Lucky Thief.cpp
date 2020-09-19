#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--) {
        ll n,m,res=0;
        cin>>n>>m;
        --m;
        while(n--) {
            res+=m;
            --m;
        }
        cout<<res<<'\n';
    }
    return 0;
}

