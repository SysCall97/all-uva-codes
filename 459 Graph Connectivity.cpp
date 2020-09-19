#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int parent[50],ans;

int findRepesentative(int n)
{
    if(parent[n] == n) return n;
    return parent[n] = findRepesentative(parent[n]);
}

void dsu(int u, int v)
{
    int a = findRepesentative(u);
    int b = findRepesentative(v);
    if(a != b) {
        parent[a] = b;
        ++ans;
    }
}

void setParent(int n)
{
    for(int i=1; i<=n; ++i)
        parent[i] = i;
}

int main()
{
    int t,s=0;
    cin>>t;
    getchar();
    for(int i=0; i<t; ++i,s=1) {
        ans = 0;
        if(s) nl;
        int u,v,h;
        char highest;
        string str;
        cin>>highest;
        ignore;
        h = highest-'A'+1;
        setParent(h);
        while(getline(cin,str) && str!="") {
            int u = str[0]-'A'+1;
            int v = str[1]-'A'+1;
            dsu(u,v);
        }
        cout<<h-ans<<'\n';
    }

    return 0;
}

