#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1) {
        int price[10020];
        memset(price,0,sizeof(price));
        int p;
        for(int i=0; i<n; ++i) {
            scanf("%d",&price[i]);
        }
        int money;
        scanf("%d",&money);
        sort(price,price+n);
        int len=n,index1=0,index2=0,diff=20000000;
        for(int i=0; i<len; ++i) {
            if(price[i]<money) {
                if(binary_search(price,price+n,money-price[i])) {
                    if(diff>abs(money-(2*price[i]))) {
                        index1=min(money-price[i],price[i]);
                        index2=max(money-price[i],price[i]);
                        diff=abs(money-(2*price[i]));
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",index1,index2);
    }
    return 0;
}

