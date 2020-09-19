#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int main()
{
    int n,b,h,w;
    while(scanf("%d%d%d%d",&n,&b,&h,&w)==4) {
        int p,cost,miniCost=10000000,r,prevMini=100000000;
        bool b1=0,c=0;
        for(int i=0; i<h; ++i) {
            scanf("%d",&p);
            cost=n*p;
            for(int j=0; j<w; ++j) {
                scanf("%d",&r);
                if(r>=n) c=1;
            }
            if(cost<=b && cost<miniCost && c) prevMini=miniCost,miniCost=cost;
        }
        if(miniCost<=b) printf("%d\n",miniCost);
        else printf("stay home\n");
    }

    return 0;
}
