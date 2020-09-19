#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int main()
{
    int n;
    while(scanf("%d",&n)==1 && n) {
//        int ans,arr[n+4]= {},i,counter=n,k,s=2;
//        for(i=1; i<=n; ++i) arr[i]=i;
//        while(arr[2]) {
//            int temp[counter+2]= {},l=0;
//            for(i=s; arr[i]; i+=2) temp[++l]=arr[i];
//            s=i-counter;
//            for(i=1; i<=counter; ++i) arr[i]=0;
//            for(i=1; temp[i]; ++i) arr[i]=temp[i];
//            counter=l;
//        }
//        printf("%d-->%d",n,arr[1]);
//        nl;
        int ans=1;
        while(ans<n) ans=(ans<<1);
        int diff=ans-n;
        ans-=(2*diff);
        printf("%d",ans);
        nl;
    }

    return 0;
}

