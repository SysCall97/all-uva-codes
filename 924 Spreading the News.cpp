#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
vector <int> adj[2502];
void BFS(int s, int n)
{
    if(!adj[s].size()) printf("0\n");
    else {
        queue<int> q;
        bool heared[n+1];
        int dailyBoom[2501],index,maxi=0,hearedDay[2501];
        memset(dailyBoom, 0, sizeof dailyBoom);
        memset(heared, 0, sizeof heared);
        memset(hearedDay, 0, sizeof hearedDay);

        q.push(s);
        int j=s;
        heared[j]=true;
        dailyBoom[0]=0;
        hearedDay[s]=0;

        while(!q.empty()) {
            int u=q.front();
            q.pop();
            int len=adj[u].size();

            for(int i=0; i<len; ++i) {
                if(!heared[adj[u][i]]) {
                    heared[adj[u][i]]=1;
                    hearedDay[adj[u][i]]=hearedDay[u]+1;
                    ++dailyBoom[hearedDay[adj[u][i]]];
                    q.push(adj[u][i]);
                }
            }
        }

        for(int i=0; i<=2500; ++i) {
            if(maxi<dailyBoom[i]) {
                maxi=dailyBoom[i];
                index=i;
            }
        }

        printf("%d %d\n",maxi,index);
    }
}
int main()
{
    int e,m,f,i,j,t,source;
    scanf("%d",&e);
    for(i=0; i<e; ++i) {
        scanf("%d",&m);
        for(j=0; j<m; ++j) {
            scanf("%d",&f);
            adj[i].push_back(f);
        }
    }
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&source);
        BFS(source,e);
    }
    return 0;
}
