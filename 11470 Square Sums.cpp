#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int main()
{
    int n,Case=0;
    while(scanf("%d",&n)==1 && n) {
        int arr[15][15]={},i,j,k,indx=(n&1)?((n>>1)+1):(n>>1);
        for(i=1; i<=n; ++i) {
            for(j=1; j<=n; ++j) {
                scanf("%d",&arr[i][j]);
            }
        }
        int sum[indx+2]={};
        for(i=1; i<=indx; ++i) {
            sum[i]=0;
            int last=n-i+1;
            for(j=i; j<=last; ++j) {
                if(j==i || j==last)
                    for(k=i; k<=last; ++k) sum[i]+=arr[j][k];
                else sum[i]+=arr[j][i]+arr[j][last];
            }
        }
        printf("Case %d:",++Case);
        for(i=1; i<=indx; ++i) printf(" %d",sum[i]);
        nl;
    }

    return 0;
}
