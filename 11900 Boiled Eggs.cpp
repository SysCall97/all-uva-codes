#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    vector<int> weight;
    scanf("%d",&t);
    for(int Case=1; Case<=t; ++Case) {
        int n,p,q,m,maximum=0;
        scanf("%d%d%d",&n,&p,&q);
        for(int i=0; i<n; ++i) {
            scanf("%d",&m);
            weight.push_back(m);
        }

        for(int first=0; first<n; ++first) {
            for(int last=first; last<n && last-first<p; ++last) {
                int sum=0,counter=0;
                for(int i=first; i<=last; ++i) {
                    sum+=weight[i];
                    if(sum<=q) counter++;
                    else break;
                }
                if(counter>maximum) maximum=counter;
            }
        }
        printf("Case %d: %d\n",Case,maximum);
        weight.resize(0);
    }
    return 0;
}

