#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long y;
    while(scanf("%lld",&y)==1) {
        if(y<0)
            return 0;
        if(!y)
            printf("0 1\n");
        else {
            long long fib0=1,fib1=1,fib,m0=1,m=1;
            for(int i=2; i<=y; ++i) {
                fib=fib0+fib1;
                fib0=fib1,fib1=fib;
                m=m0+fib0;
                m0=m;
            }
            printf("%lld %lld\n",m,m+fib1);
        }
    }
}
