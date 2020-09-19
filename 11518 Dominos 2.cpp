#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
struct component{
    bool fallen;
    int connected[10002];
    int top;
};

void BFS(struct component* node, int s, int Size)
{
    int j=s;
    node[s].fallen=true;
    queue<int> q;
    q.push(s);
    while(!q.empty()) {
        int u=q.front();
        q.pop();
        for(int i=0; i<=node[u].top; ++i) {
            if(!node[node[u].connected[i]].fallen) {
                node[node[u].connected[i]].fallen=true;
                q.push(node[u].connected[i]);
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int n,r,s,a,b;
        scanf("%d%d%d",&n,&r,&s);
        struct component dominos[n+2];
        for(int i=1; i<=n; ++i) dominos[i].fallen=false,dominos[i].top=-1;

        for(int i=0; i<r; ++i) {
            scanf("%d%d",&a,&b);
            dominos[a].connected[++dominos[a].top]=b;
        }
        for(int i=0; i<s; ++i) {
            scanf("%d",&a);
            BFS(dominos,a,n);
        }
        int Fallen=0;
        for(int i=1; i<=n; ++i) {
            if(dominos[i].fallen) ++Fallen;
        }
        printf("%d\n",Fallen);
    }

    return 0;
}

