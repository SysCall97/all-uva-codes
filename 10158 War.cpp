#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int Friend[10000],Enimy[10000];
#define inf INFINITY

int areEnimy(int u, int v) {
    if(areFriend(u,v)) return 0;

}

int areFriend(int u, int v) {
    int a=findParent(u);
    int b=findParent(v);
    if(a==b) return 1;
    return 0;
}

int setFriend(int a, int b) {

}

int setEnimy(int a, int b) {

}

int main() {
    int node,a,b,c,d;
    scanf("%d",&node);
    for(int i=0; i<=node; ++i) Friend[i]=i,Enimy[i]=inf;
    while(cin>>c>>a>>b) {
        if(!c && !a && !b) break;
        if(c==1) {
            d=setFriend(a,b);
            if(d==0) printf("-1\n");
        } else if(c==2) {
            d=setEnimy(a,b);
            if(d==0) printf("-1\n");
        } else if(c==3) {
            d=areFriend(a,b);
            printf("%d\n",d);
        } else if(c==4) {
            d=areEnimy(a,b);
            printf("%d\n",d);
        }
    }
    return 0;
}

