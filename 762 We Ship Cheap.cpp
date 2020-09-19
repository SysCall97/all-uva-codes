#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define el '\n'
vector<int>adjList[10000];
string inp[10000];
int ancestor[10000];
int arr[10000];
bool visited[10000];

void bfs(int source, int destination) {
    queue<int> q;
    q.push(source);
    while(!q.empty()) {
        int u=q.front();
        q.pop();
        int last=adjList[u].size();
        for(int j=0; j<last; ++j) {
            if(!visited[adjList[u][j]]) {
                ancestor[adjList[u][j]]=u;
                visited[adjList[u][j]]=true;
                q.push(adjList[u][j]);
            }
            if(adjList[u][j]==destination) break;
        }
    }
}

int main() {
    int edge,n=0;
    while(cin>>edge) {
        ignore;
        for(int i=0; i<10000; ++i) adjList[i].clear(),visited[i]=false,inp[i].clear();
        std::map<string, int> Map;
        string str1,str2,source,destination;
        int cnt=0;

        while(edge--) {
            cin>>str1>>str2;
            if(Map.find(str1)==Map.end()) Map[str1]=++cnt, inp[cnt]=(str1);
            if(Map.find(str2)==Map.end()) Map[str2]=++cnt, inp[cnt]=(str2);
            adjList[Map[str1]].push_back(Map[str2]);
            adjList[Map[str2]].push_back(Map[str1]);
        }

        cin>>source>>destination;
        bfs(Map[source],Map[destination]);

        if(n==1) cout<<el;
        if(!visited[Map[destination]]) printf("No route\n");
        else {
            int j=-1;
            for(int i=Map[destination];; i=ancestor[i]) {
                arr[++j]=i;
                if(i==Map[source]) break;
            }

            for(int i=j; i>0; --i)
                cout << inp[arr[i]] << " " << inp[arr[i-1]] << el;
        }
        n=1;
    }
    return 0;
}
