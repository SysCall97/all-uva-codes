#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n;
    while(scanf("%llu",&n)==1 && n) {
        unsigned long long sq=sqrt(n);
        if(sq*sq==n) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
