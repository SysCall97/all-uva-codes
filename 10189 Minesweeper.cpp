#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int main()
{
    int n,m,i,j,Case=0;
    while(scanf("%d%d",&n,&m)==2) {
        if(!n && !m) return 0;
        if(Case>0) nl;
        char line[n+1][m+1];
        for(i=0; i<n; ++i) {
            ignore;
            scanf("%s",line[i]);
        }
        int arr[102][102]= {};
        for(i=0; i<n; ++i) {
            for(j=0; line[i][j]; ++j) {
                if(line[i][j]=='*') {
                    if(line[i-1][j-1]!='*' && i-1>=0 && j-1>=0) ++arr[i-1][j-1];
                    if(line[i-1][j]!='*' && i-1>=0) ++arr[i-1][j];
                    if(line[i-1][j+1]!='*' && i-1>=0 && j+1<m) ++arr[i-1][j+1];
                    if(line[i][j-1]!='*' && j-1>=0) ++arr[i][j-1];
                    if(line[i][j+1]!='*' && j+1<m) ++arr[i][j+1];
                    if(line[i+1][j-1]!='*' && i+1<n && j-1>=0) ++arr[i+1][j-1];
                    if(line[i+1][j]!='*' && i+1<n) ++arr[i+1][j];
                    if(line[i+1][j+1]!='*' && i+1<n && j+1<m) ++arr[i+1][j+1];
                }
            }
        }
        printf("Field #%d:\n",++Case);
        for(i=0; i<n; ++i) {
            for(j=0; j<m; ++j) {
                if(line[i][j]=='*') printf("*");
                else printf("%d",arr[i][j]);
            }
            nl;
        }
    }

    return 0;
}
