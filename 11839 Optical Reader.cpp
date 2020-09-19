#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(cin>>t) {
        while(t--) {
            int rec[5],cnt=0,indx;
            for(int i=0; i<5; ++i) {
                cin>>rec[i];
                if(rec[i]<=127)cnt++,indx=i;
            }
            if(cnt!=1) printf("*\n");
            else printf("%c\n",'A'+indx);
        }
    }
    return 0;
}
