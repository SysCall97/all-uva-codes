#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int main() {
    int t;
    cin>>t;
    for(int Case=1; Case<=t; ++Case) {
        ignore;
        string str;
        bool lin=0,ans=0;

        for(int i=0; i<5; ++i) {
            getline(cin,str);
            lin=0;
            for(int j=0; j<5; ++j) {
                if(str[j]=='|') lin=1;
                if(str[j]=='>' && lin==0) ans=1;
                if(str[j]=='<' && lin==1) ans=1;
            }
            str.clear();
        }

        if(ans) printf("Case %d: Thik Ball\n",Case);
        else printf("Case %d: No Ball\n",Case);
    }

    return 0;
}

