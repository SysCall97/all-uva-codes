#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
    int cnt=0;
    for(int i=2; i*i<=n; ++i) {
        if(n%i==0) {
            while(n%i==0)
                n/=i;
            ++cnt;
        }
    }
    if(n>1) ++cnt;
    return cnt;
}
int main()
{
    int n;
    while(scanf("%d",&n)==1 && n)
        printf("%d : %d\n",n,func(n));

    return 0;
}

