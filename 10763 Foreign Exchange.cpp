#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(scanf("%d",&t)==1 && t) {
        vector<long long> origin;
        vector<long long> destination;
        long long o,d;
        for(int i=0; i<t; ++i) {
            cin>>o>>d;
            origin.push_back(o);
            destination.push_back(d);
        }
        sort(origin.begin(),origin.end());
        sort(destination.begin(),destination.end());
        bool b=true;
        for(int i=0; i<t && b; ++i) {
            if(origin[i]-destination[i])
                b=false;
        }
        if(b) printf("YES\n");
        else printf("NO\n");

        origin.resize(0);
        destination.resize(0);
    }
    return 0;
}

