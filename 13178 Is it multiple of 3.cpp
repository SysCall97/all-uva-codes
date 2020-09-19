#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll Case;
    cin>>Case;
    while(Case--) {
        ll n;
        cin>>n;
        ll m=n+1;
        if(n%2)m/=2;
        else n/=2;
        if((n*m)%3)cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
    return 0;
}
