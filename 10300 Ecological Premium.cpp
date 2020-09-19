#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int f;
        cin>>f;
        long long sum=0;
        while(f--) {
            long long l,a,e;
            cin>>l>>a>>e;
            sum+=(l*e);
        }
        cout<<sum<<'\n';
    }
    return 0;
}
