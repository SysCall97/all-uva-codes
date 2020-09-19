#include<bits/stdc++.h>
using namespace std;

void converBaseThree(int n)
{
    if(!n) return;
    else converBaseThree(n/3);
    printf("%d",n%3);
}
int main()
{
    long long n;
    while(scanf("%lld",&n)==1) {
        if(n<0) return 0;
        else if(n==0) printf("0");
        else converBaseThree(n);
        printf("\n");
    }
    return 0;
}
