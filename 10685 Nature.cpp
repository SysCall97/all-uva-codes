#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int parent[5500],comunity[5500];
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
    int node,edge;

    while(scanf("%d%d",&node,&edge)==2) {
        if(node==0 && edge==0) break;
        for(int i=1; i<=node; ++i) parent[i]=i,comunity[i]=1;

        std::vector<string>animals;
        std::string str,str1;
        std::map<std::string, int> Map;

        for(int i=0,k=1; i<node; ++i) {
            cin >> str;
            animals.push_back(str);
            if(Map.find(str)==Map.end()) Map[str]=k++;
        }

        ans=1;
        for(int i=0; i<edge; ++i) {
            cin >> str >> str1;
            Union(Map[str],Map[str1]);
        }
//        for(int i=0; i<node; ++i) if(comunity[Map[animals[i]]]>ans)
//            ans=comunity[Map[animals[i]]];
        printf("%d\n",ans);
    }

    return 0;
}

