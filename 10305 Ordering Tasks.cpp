#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2) {
        if(!n && !m) return 0;
        int order[100],index[100],h,l,temp;

        for(int i = 1; i <= n; ++i) {
            order[i] = n-i+1;
            index[n-i+1] = i;
        }

        for(int i = 0; i < m; ++i) {
            scanf("%d%d",&h,&l);
            if(index[h]>index[l]) {
                temp = order[index[h]];
                order[index[h]] = order[index[l]];
                order[index[l]] = temp;
                temp = index[h];
                index[h] = index[l];
                index[l] = temp;
            }
        }

        for(int i = 1; i <= n; ++i) {
            printf("%d",order[i]);
            if(i!=n) printf(" ");
        }
        nl;
    }

    return 0;
}
