#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    double n,r;
    while(cin>>r>>n)
        printf("%0.3lf\n",n*r*r*sin(2*pi/n)/2);
    return 0;
}
