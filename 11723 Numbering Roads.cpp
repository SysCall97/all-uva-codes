#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Case=1,r,n;
    while(scanf("%d%d",&r,&n)==2) {
        if(!r && !n)
            return 0;
        if(27*n<r)
            printf("Case %d: impossible\n",Case++);
        else if(r<n)
            printf("Case %d: 0\n",Case++);
        else {
            int m=r-n;
            printf("Case %d: %d\n",Case++,(m%n)?(m/n)+1:(m/n));
        }
    }
    return 0;
}
