#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int main()
{
    int n;
    while(scanf("%d",&n)==1 && n) {
        int ans,arr[n+4]= {},i,counter=n,k,s=2;
        for(i=1; i<=n; ++i) arr[i]=i;
        printf("Discarded cards:");
        while(arr[2]) {
            int temp[counter+2]= {},l=0;
            for(i=s; arr[i]; i+=2) {
                temp[++l]=arr[i];
                if(arr[i-1]) {
                    if(arr[i-1]>1) printf(",");
                    printf(" %d",arr[i-1]);
                }
            }
            if(arr[i-1]) printf(", %d",arr[i-1]);
            s=i-counter;
            for(i=1; i<=counter; ++i) arr[i]=0;
            for(i=1; temp[i]; ++i) arr[i]=temp[i];
            counter=l;
        }
        nl;
        printf("Remaining card: %d",arr[1]);
        nl;
    }
    return 0;
}
