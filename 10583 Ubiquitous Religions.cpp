#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
const int MAX=60000;
int cnt,parent[MAX];

int findParent(int u) {
    if(parent[u]!=u) parent[u] = findParent(parent[u]);
    return parent[u];
}

void Union(int u, int v) {
    int a = findParent(u);
    int b = findParent(v);
    if(a!=b) {
        parent[a] = b;
        ++cnt;
    }
}

int main() {
    int node,edge,u,v,Case=0;
    while(cin>>node>>edge) {
        if(!node && !edge) break;
        cnt=0;
        for(int i=1; i<=node; ++i) parent[i]=i;
        for(int i=0; i<edge; ++i) {
            cin>>u>>v;
            Union(u,v);
        }
        printf("Case %d: %d\n",++Case,node-cnt);
    }

    return 0;
}
