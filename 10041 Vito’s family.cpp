#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    vector<int> roadNumber;
    while(scanf("%d",&t)==1) {
        while(t--) {
            int n,m,ans=0;
            scanf("%d",&n);

            for(int i=0; i<n; ++i) {
                scanf("%d",&m);
                roadNumber.push_back(m);
            }

            sort(roadNumber.begin(),roadNumber.end());
            int last=(n/2)-1;
            for(int i=0; i<=last; ++i)
                ans+=(roadNumber[n-i-1]-roadNumber[i]);

            printf("%d\n",ans);
            roadNumber.resize(0);
        }
    }

    return 0;
}

