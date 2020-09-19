#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int main()
{
    int n,p,i;
    while(scanf("%d",&n)==1) {
        vector <int> P;
        for(i=0; i<n; ++i) {
            scanf("%d",&p);
            ignore;
            P.push_back(p);
        }
        for(i=0; i<n; ++i) {
            if(P[i]==2 || P[i]==3 || P[i]==5 || P[i]==7 || P[i]==13 || P[i]==17)
                printf("Yes");
            else printf("No");
            nl;
        }
        P.clear();
    }
    return 0;
}
