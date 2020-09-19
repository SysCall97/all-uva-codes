#include<bits/stdc++.h>
using namespace std;
int sqrrt(int n)
{
    for(int i=1; ; i++) {
        if(i*i>n)
            return (i-1);
    }
}
int cubrt(int n)
{
    for(int i=1; ; i++) {
        if(i*i*i>n)
            return (i-1);
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)==1 && n) {
        int sq=sqrrt(n);
        int trd=cubrt(n);
        if((sq*sq==n) && (trd*trd*trd==n))
            printf("Special\n");
        else
            printf("Ordinary\n");
    }
    return 0;
}
