#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,w,m;
        cin>>n>>w;
        vector < int > weight;
        for(int i=0; i<n; ++i) {
            cin>>m;
            weight.push_back(m);
        }
        sort(weight.begin(),weight.end());
        int sum=weight[0],cnt=1;
        for(int i=1; i<n; ++i) {
            if(sum+weight[i]<=w) {
                sum+=weight[i];
                ++cnt;
            } else break;
        }
        printf("%d\n",cnt);
        weight.resize(0);
    }
    return 0;
}

