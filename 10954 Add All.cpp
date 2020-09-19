#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n) {
        vector < int > nmbr;
        int m;
        for(int i=0; i<n; ++i) {
            cin>>m;
            nmbr.push_back(m);
        }
        sort(nmbr.begin(),nmbr.end());
        int sum1=0,sum2=0,cost,prevCost=nmbr[0]+nmbr[1];
        for(int i=2; i<n; ++i) {
            cost=prevCost+nmbr[i];
            sum1+=prevCost;
            prevCost=cost;
        }
        sum1+=prevCost;
        prevCost=nmbr[n-1]+nmbr[n-2];
        for(int i=3; i>=0; --i) {
            cost=prevCost+nmbr[i];
            sum2+=prevCost;
            prevCost=cost;
        }
        sum2+=prevCost;
        cout<<min(sum1,sum2)<<'\n';
        nmbr.resize(0);
    }
    return 0;
}

