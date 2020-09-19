#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long llu;
vector < llu > divisors;

vector < llu > getDivisors(llu n)
{
    vector < llu > div;
    llu sq=sqrt(n);
    for(llu i=1; i<=sq; ++i) {
        if(!(n%i)) {
            div.push_back(i);
            div.push_back(n/i);
        }
    }
    return div;
}
llu gcd(llu a, llu b)
{
    while(b)
        b ^= a ^= b ^= a %= b;
    return a;
}
bool isCoPrime(llu a, llu b)
{
    if(gcd(a,b)==1) return 1;
    return 0;
}
int main()
{
    llu n,Case=0;
    while(cin>>n && n) {
        divisors=getDivisors(n);
        llu len=divisors.size(),minimum;
        for(llu i=32; i>0; --i) {
            llu mask=1<<i;
            minimum |= mask;
        }
        for(llu i=0; i<len-1; i+=2) {
            cout<<divisors[i]<<" "<<divisors[i+1]<<'\n';
            if(!isCoPrime(divisors[i+1],divisors[i]))
                continue;
            llu sum=divisors[i+1]+divisors[i];
            if(sum<minimum)
                minimum=sum;
        }
        printf("Case %llu: %llu\n",++Case,minimum);
        divisors.resize(0);
    }
    return 0;
}

