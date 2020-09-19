#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int parent[35000],comunity[35000];
int ans;

int findParent(int u) {
    if(u!=parent[u]) parent[u]=findParent(parent[u]);
    return parent[u];
}

void Union(int u, int v) {
    int a=findParent(u);
    int b=findParent(v);
    if(a!=b) {
        if(comunity[a]>=comunity[b]) {
            comunity[a]+=comunity[parent[b]];
            parent[b]=a;
            ans=ans<comunity[a]?comunity[a]:ans;
        } else {
            comunity[b]+=comunity[parent[a]];
            parent[a]=b;
            ans=ans<comunity[b]?comunity[b]:ans;
        }
    }
}

int main() {
    int tc,node,edge,u,v;
    scanf("%d",&tc);
    while(tc--) {
        scanf("%d%d",&node,&edge);
        for(int i=1; i<=node; ++i) parent[i]=i,comunity[i]=1;
        ans=1;
        for(int i=0; i<edge; ++i) {
            scanf("%d%d",&u,&v);
            Union(u,v);
        }
        printf("%d\n",ans);
    }
    return 0;
}

