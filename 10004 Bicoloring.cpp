#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int main()
{
    int n;
    while(scanf("%d",&n)==1 && n) {
        int e,v1,v2,i,j;
        scanf("%d",&e);
        int visited[n+1],b=1;
        memset(visited,-1,sizeof (visited));
        vector <int> List[n+1];

        for(i=0; i<e; ++i) {
            scanf("%d%d",&v1,&v2);
            List[v1].push_back(v2);
            List[v2].push_back(v1);
        }
        queue<int> q;
        q.push(0);
        visited[0]=0;
        while(!q.empty() && b) {
            int u=q.front();
            q.pop();
            int len=List[u].size();
            for(i=0; i<len && b; ++i) {

                if(visited[List[u][i]]==-1) {
                    if(visited[u]==0) visited[List[u][i]]=1;
                    else visited[List[u][i]]=0;
                    q.push(List[u][i]);

                } else {
                    if(visited[List[u][i]]==visited[u]) {
                        printf("NOT BICOLORABLE.\n");
                        b=0;
                    }
                }
            }
        }
        if(b) printf("BICOLORABLE.\n");
    }

    return 0;
}

