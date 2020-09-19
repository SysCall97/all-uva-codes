#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int LEN=-1;

struct component {
    int nodeVal;
    int connectedNode[1000];
    int top;
    int level;
    int connectedLowerLevel;
} Node[1000];

void push(int n, int m)
{
    for(int i=0; i<1000; ++i) {
        if(Node[i].nodeVal==n) {
            Node[i].top+=1;
            Node[i].connectedNode[Node[i].top]=m;
            break;
        } else if(Node[i].nodeVal==-1) {
            Node[i].nodeVal=n;
            Node[i].top+=1;
            Node[i].connectedNode[Node[i].top]=m;
            ++LEN;
            break;
        }
    }
}

int Search(int n)
{
    for(int i=0; Node[i].nodeVal>-1; ++i)
        if(Node[i].nodeVal==n) return i;
    return -1;
}

int minimum(int n,int m)
{
    return(m<n)?m:n;
}

void reset()
{
    LEN=-1;
    for(int i=0; i<1000; ++i) {
        Node[i].level=-1;
        Node[i].top=-1;
        Node[i].nodeVal=-1;
        Node[i].connectedLowerLevel=5000;
    }
}

int main()
{
    int n,i,j,v1,v2,Case=0;
    while(scanf("%d",&n)==1 && n) {
        reset();
        for(i=0; i<n; ++i) {
            scanf("%d%d",&v1,&v2);
            push(v1,v2);
            push(v2,v1);
        }
        vector<int> st;
        vector<int> fs;

        while(scanf("%d%d",&v1,&v2)==2) {
            if(!v1 && !v2) break;
            st.push_back(v1);
            fs.push_back(v2);
        }

        queue<int> q;

        int len1=st.size(),k;

        for(i=0; i<len1; ++i) {

            int counter=0;
            j=Search(st[i]);
            if(j==-1)
                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++Case,LEN+1,st[i],fs[i]);
            else {
                q.push(j);
                Node[j].level=0;
                while(!q.empty()) {
                    int u=q.front();
                    q.pop();
                    for(k=0; k<=Node[u].top; ++k) {
                        v1=Search(Node[u].connectedNode[k]);
                        if(Node[v1].level==-1) {
                            q.push(v1);
                        }
                        if(Node[v1].nodeVal!=st[i]) {
                            Node[v1].connectedLowerLevel=minimum(Node[v1].connectedLowerLevel,Node[u].level);
                            Node[v1].level=Node[v1].connectedLowerLevel+1;
                        }
                    }
                }

                for(j=0; j<=LEN; ++j) {
                    if(Node[j].level>fs[i] || Node[j].level<0) ++counter;
                    Node[j].level=-1;
                    Node[j].connectedLowerLevel=5000;
                }
                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++Case,counter,st[i],fs[i]);
            }
        }
    }
    return 0;
}
