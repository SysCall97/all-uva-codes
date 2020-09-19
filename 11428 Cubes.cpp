#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1 && n) {
        int b=1;
        for(int i=1; i<=n && b; ++i) {
            for(int j=0; i*i*i-j*j*j>=n; ++j) {
                if(i*i*i-j*j*j==n) {
                    printf("%d %d\n",i,j);
                    b=0;
                }
            }
        }
        if(b) printf("No solution\n");
    }
    return 0;
}
