#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int main()
{
    string inp;
    while(getline(cin,inp)) {
        int nmbr=0;
        for(int i=0; inp[i]; ++i) {
            if(nmbr>100) break;
            if(inp[i]>='0' && inp[i]<='9') nmbr=(inp[i]-'0')+(nmbr*10);
        }
        if(!nmbr) break;
        nmbr=0;
        for(int i=0; inp[i]; ++i) {
            nmbr+=(inp[i]-'0');
        }
        if(nmbr%9) cout<<inp<<" is not a multiple of 9."<<'\n';
        else {
            int cnt=1,n=nmbr;
            while(n>10) {
                n=0;
                while(nmbr) {
                    n+=(nmbr%10);
                    nmbr/=10;
                }
                nmbr=n;
                ++cnt;
            }
            cout<<inp<<" is a multiple of 9 and has 9-degree "<<cnt<<"."<<'\n';
        }
    }

    return 0;
}

