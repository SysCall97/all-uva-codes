#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int main()
{
    double m1,m2,m3,ans;
    while(scanf("%lf%lf%lf",&m1,&m2,&m3)==3) {
        double sm=(m1+m2+m3)/2;
        double d=sm*(sm-m1)*(sm-m2)*(sm-m3);
        if(d<=0) ans=-1;
        else ans=4*(sqrt(d))/3;
        printf("%0.3lf\n",ans);
    }
    return 0;
}
