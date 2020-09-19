#include<bits/stdc++.h>
using namespace std;
#define Max 10000000
#define scan1(n) scanf("%d",&n)
#define scan2(n,m) scanf("%d%d",&n,&m)
#define printi1(n) printf("%d\n",n)
#define printi2(n,m) printf("%d %d\n",n,m)
#define fori(a,b) for(int i=a; i<b; ++i)
#define ford(a,b) for(int i=a; i>=b; --i)
#define nl puts("")
int main()
{
    int n;
    scan1(n);
    while(n--) {
        int weightBasedPrice[31],p,w,o,g,mw,ans=0;
        memset(weightBasedPrice,0,sizeof weightBasedPrice);
        scan1(o);
        while(o--) {
            scan2(p,w);
            ford(30,w) {
                if(weightBasedPrice[i]<weightBasedPrice[i-w]+p)
                    weightBasedPrice[i]=weightBasedPrice[i-w]+p;
            }
        }
        scan1(g);
        while(g--) {
            scan1(mw);
            ans+=weightBasedPrice[mw];
        }
        printi1(ans);
    }
    return 0;
}
