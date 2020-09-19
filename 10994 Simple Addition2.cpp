#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll digitSum[]= {0,1,3,6,10,15,21,28,36,45};

ll S(ll n)
{
    ll sum=0;
    if(n<=0)
        return 0;
    while(n) {

        ll line=n/10;
        ll P=n%10;
        sum += 45*line+digitSum[P];
        n=line;
    }
    return sum;
}

int main()
{
    ll p,q;
    while(scanf("%lld%lld",&p,&q)==2) {
        if(p<0 && q<0)
            return 0;
        else
            cout<<S(q)-S(p-1)<<endl;
    }
    return 0;
}
