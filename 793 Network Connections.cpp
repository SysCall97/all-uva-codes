#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
vector<int> parent;
int findParent(int u) {
    if(u==parent[u]) return u;
    return parent[u]=findParent(parent[u]);
}

void Union(int u, int v) {
    int a=findParent(u);
    int b=findParent(v);
    if(a!=b) parent[a>b?a:b]=a>b?b:a;
}

int main() {
    int t,b=0;
    scanf("%d",&t);
    while(t--) {
        if(b) nl;
        int a,b,noOfComputer;
        int successful=0,unsuccessful=0;
        char ch;
        string inp;
        scanf("\n%d\n",&noOfComputer);
        for(int i=0; i<=noOfComputer; ++i) parent.push_back(i);

        while(1) {
            if(!getline(cin,inp) || inp.empty()) break;
            sscanf(inp.c_str(),"%c %d %d",&ch,&a,&b);
            if(ch=='c') Union(a,b);
            else findParent(a)==findParent(b)?++successful:++unsuccessful;
        }

        printf("%d,%d\n",successful,unsuccessful);
        if(t) {
            nl;
            parent.resize(0);
        }
    }
    return 0;
}
