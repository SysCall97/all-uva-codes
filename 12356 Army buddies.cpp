#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int Right[100002],Left[100002];
int main()
{
    int s,b,i,l,r;
    while(scanf("%d%d",&s,&b)==2) {
        if(!s && !b) break;
        for(i=1; i<=s; ++i) {
            Left[i]=i-1;
            Right[i]=i+1;
        }

        Left[1]=-1;
        Right[s]=-1;

        for(i=0; i<b; ++i) {
            scanf("%d%d",&l,&r);

            Left[Right[r]]=Left[l];
            Right[Left[l]]=Right[r];

            if(Left[l]<1) printf("*");
            else printf("%d",Left[l]);

            if(Right[r]<1) printf(" *");
            else printf(" %d",Right[r]);
            nl;
        }

        printf("-\n");
    }

    return 0;
}
