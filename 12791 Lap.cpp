#include<bits/stdc++.h>
using namespace std;

int main()
{
    int f,s;
    while(cin>>f>>s) {
        int a=s-f;
        int ans=(!(s%a))?0:1;
        ans+=(s/a);
        cout<<ans<<'\n';
    }
    return 0;
}
