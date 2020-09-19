#include<bits/stdc++.h>
using namespace std;
#define Max 1000000
#define scan1(n) scanf("%d",&n)
#define scan2(n,m) scanf("d",&n,&m)
#define printi1(n) printf("%d",n)
#define printi2(n,m) printf("%d %d\n",n,m)
#define fori(a,b) for(int i=a; i<b; ++i)
#define ford(a,b) for(int i=a; i>=b; --i)
#define nl puts("")
int main()
{
    char ch;
    int cnt=0;
    while(scanf("%c",&ch)==1) {
        if(ch==34) {
            ++cnt;
            if(cnt&1) printf("%c%c",96,96);
            else printf("%c%c",39,39);
            continue;
        } else printf("%c",ch);
    }
    return 0;
}
