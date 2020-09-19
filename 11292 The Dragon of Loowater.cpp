#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2) {
        if(n==0 && m==0) break;
        int k;
        vector < int > diameter;
        vector < int > height;
        for(int i=0; i<n; ++i) {
            scanf("%d",&k);
            diameter.push_back(k);
        }
        for(int i=0; i<m; ++i) {
            scanf("%d",&k);
            height.push_back(k);
        }
        if(n>m) printf("Loowater is doomed!\n");
        else {
            sort(diameter.begin(),diameter.end());
            sort(height.begin(),height.end());
            k=0;
            int ans=0,i;
            for(i=0; i<n; ++i) {
                while(height[k]<diameter[i]) {
                    k++;
                    if(k>=m) break;
                }
                if(k>=m) break;
                ans+=height[k];
                height[k]=-1;
            }

            if(k>=m || i<n) printf("Loowater is doomed!\n");
            else printf("%d\n",ans);
        }
        diameter.resize(0);
        height.resize(0);
    }
    return 0;
}
