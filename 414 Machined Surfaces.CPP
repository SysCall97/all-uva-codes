#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n) {
        int space[30];
        string str;
        getchar();
        for(int i=0; i<n; ++i) {
            getline(cin,str);
            int len=str.length(),counter=0;
            for(int j=0; j<len; ++j)
                if(str[j]==32) ++counter;
            space[i]=counter;
        }
        int minimum=1000;
        for(int i=0; i<n; ++i) {
            minimum=min(minimum,space[i]);
        }
        int ans=0;
        for(int i=0; i<n; ++i)
            ans+=(space[i]-minimum);
        cout<<ans<<'\n';
    }
    return 0;
}

