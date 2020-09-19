#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int sqroot(int n)
{
    int i;
    for(i=0; i*i<n; ++i);
    return i;
}
int main()
{
    int t,A,B,C,x,y,z;
    scanf("%d",&t);
    while(t--) {
        scanf("%d%d%d",&A,&B,&C);
        int sq=sqroot(C),X=-1,Y=-1,Z=-1;
        int st=(-1)*sq;
        bool b=0;
        for(x=st; !b && x<=sq; ++x) {
            for(y=x+1; !b && y<=sq; ++y) {
                for(z=y+1; !b && z<=sq; ++z) {
                    if((x*x)+(y*y)+(z*z)==C) {
                        if(x*y*z==B && x+y+z==A) X=x,Y=y,Z=z,b=1;
                    }
                }
            }
        }
        if(b) printf("%d %d %d",X,Y,Z);
        else printf("No solution.");
        nl;
    }
    return 0;
}

