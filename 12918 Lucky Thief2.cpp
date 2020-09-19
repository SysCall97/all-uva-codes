#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sum(a) a*(a+1)/2
int main()
{
    ll t;
    cin>>t;
    while(t--) {
        ll n,m;
        cin>>n>>m;
        n=m-n-1;
        m-=1;
        m=sum(m),n=sum(n);
        cout<<m-n<<'\n';
    }

    return 0;
}

