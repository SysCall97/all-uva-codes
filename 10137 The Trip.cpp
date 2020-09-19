#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (scanf("%d",&n) && n) {
        double arr[1010],total=0,diff,neg=0,pos=0;
        for(int i=0; i<n; ++i) {
            cin>>arr[i];
            total+=arr[i];
        }
        double avg=total/n,ans=0;
        for(int i=0; i<n; ++i) {
            diff=(double) (long) ((arr[i]-avg)*100.00)/100.00;
            if(diff<0) {
                neg+=diff;
            }
            else {
                pos+=diff;
            }
        }
        printf("$%0.2lf\n",(-neg>pos)?-neg:pos);
    }
    return 0;
}

