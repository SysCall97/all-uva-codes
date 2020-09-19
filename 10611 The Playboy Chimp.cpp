#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,m,q;
    scanf("%d",&n);
    vector <int> h;
    for(i=0; i<n; ++i) {
        scanf("%d",&m);
        h.push_back(m);
    }
    vector <int> hp;
    scanf("%d",&q);
    for(i=0; i<q; ++i) {
        scanf("%d",&m);
        hp.push_back(m);
    }
    for(i=0; i<q; ++i) {
        int j=0,ans1,ans2;
        while(h[j]<hp[i] && j<n) ++j;
        ans1=j-1,ans2=j;
        while(h[ans1]==hp[i]) --ans1;
        while(h[ans2]==hp[i]) ++ans2;

        if(ans1<0) printf("X");
        else printf("%d",h[ans1]);
        if(ans2>=n) printf(" X");
        else printf(" %d",h[ans2]);
        printf("\n");
    }
    h.clear();
    hp.clear();
    return 0;
}
