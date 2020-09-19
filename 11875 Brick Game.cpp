#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int Case=1; Case<=t; ++Case) {
        int n,m;
        scanf("%d",&n);
        vector<int> age;
        for(int i=0; i<n; ++i) {
            scanf("%d",&m);
            age.push_back(m);
        }
        printf("Case %d: %d\n",Case,age[n/2]);
        age.resize(0);
    }
    return 0;
}

