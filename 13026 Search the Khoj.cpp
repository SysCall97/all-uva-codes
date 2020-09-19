#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,Case=0;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        string nmbrs[1010];
        getchar();
        for(int i=0; i<n; ++i) {
            getline(cin,nmbrs[i]);
        }
        string motherNmbr;
        getline(cin,motherNmbr);
//        for(int i=0; i<n; ++i)
//            cout<<nmbrs[i]<<'\n';
//        cout<<motherNmbr<<'\n';
        int len=motherNmbr.length();
        printf("Case %d:\n",++Case);
        for(int i=0; i<n; ++i) {
            int cnt=0;
            for(int j=0; j<len && cnt<2; ++j)
                if(nmbrs[i][j]!=motherNmbr[j])
                    ++cnt;
            if(cnt<2)
                cout<<nmbrs[i]<<'\n';
        }
    }
    return 0;
}

