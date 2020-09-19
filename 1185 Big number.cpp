#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int ans[10000003]={};
int main()
{
    int n,m,i;
    double val=0;
    for(int i=1; i<10000001; ++i) {
        val+=log10(i);
        ans[i]=(int)val+1;
    }
    scanf("%d",&n);
    while(n--) {
        scanf("%d",&m);
        printf("%d",ans[m]);
        nl;
    }
    return 0;
}

