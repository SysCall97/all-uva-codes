#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    for(ll Case=1; Case<=t; Case++) {
        int N,L;
        cin>>N>>L;
        ll arr[15],limit[15],sum=0;
        for(ll i=0; i<N; i++) {
            cin>>arr[i];
            sum+=arr[i];
        }
        for(int i=0; i<N; i++) {
            cin>>limit[i];
        }
        if(sum>L) {
            cout<<"Case "<<Case<<": No"<<endl;
        } else {
            bool b=true;
            for(ll i=0; i<N && b; i++) {
                if(arr[i]>limit[i]) {
                    cout<<"Case "<<Case<<": No"<<endl;
                    b=false;
                }
            }
            if(b)
            cout<<"Case "<<Case<<": Yes"<<endl;
        }
    }
    return 0;
}
