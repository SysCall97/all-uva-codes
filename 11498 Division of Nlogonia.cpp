#include<bits/stdc++.h>
using namespace std;
#define Max 1000000
#define scan1(n) scanf("%d",&n)
#define scan2(n,m) scanf("%d%d",&n,&m)
#define printi1(n) printf("%d",n)
#define printi2(n,m) printf("%d%d\n",n,m)
#define fori(a,b) for(int i=a; i<b; ++i)
#define ford(a,b) for(int i=a; i>=b; --i)
#define nl puts("")
int main()
{
    int q;
    while(scan1(q)==1 && q) {
        int divisionPointX,divisionPointY,x,y;
        scan2(divisionPointX,divisionPointY);
        while(q--) {
            scan2(x,y);
            x=x-divisionPointX;
            y=y-divisionPointY;
            if(!x || !y) printf("divisa");
            else if(x>0 && y>0) printf("NE");
            else if(x<0 && y>0) printf("NO");
            else if(x>0 && y<0) printf("SE");
            else printf("SO");
            nl;
        }
    }
    return 0;
}
