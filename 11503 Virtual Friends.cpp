#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int parent[200100],comunity[200100];

int findParent(int u) {
    if(parent[u]!=u) parent[u] = findParent(parent[u]);
    return parent[u];
}

void Union(int u, int v) {
    int a = findParent(u);
    int b = findParent(v);
    if(a!=b) {
        if(comunity[a]>=comunity[b]){
            comunity[a] += comunity[parent[b]];
            parent[b] = a;
        } else {
            comunity[b] += comunity[parent[a]];
            parent[a] = b;
        }
    }
}

int main() {
    int tc;
    scanf("%d",&tc);
    while(tc--) {
        int edge,cnt=1;
        string u,v;
        std::map<std::string,int> Map;
        scanf("%d",&edge);
        for(int i=0; i<=2*edge; ++i) parent[i] = i,comunity[i]=1;
        ignore;

        while(edge--) {
            cin>>u>>v;
            if(Map.find(u)==Map.end()) Map[u]=cnt++;
            if(Map.find(v)==Map.end()) Map[v]=cnt++;
            Union(Map[u],Map[v]);
            int ans = comunity[findParent(Map[v])] > comunity[findParent(Map[u])] ? comunity[findParent(Map[v])] : comunity[findParent(Map[u])];
            cout << ans << '\n';
        }
    }
    return 0;
}

