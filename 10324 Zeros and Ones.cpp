#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int Case=1,t;
    while(cin>>str>>t) {
        printf("Case %d:\n",Case++);
        while(t--) {
            int a,b,maxi,mini,c=0;
            cin>>a>>b;
            maxi=(a>b)?a:b;
            mini=(a<b)?a:b;
            for(int i=mini+1; i<=maxi; ++i) {
                if(str[i]!=str[i-1])
                    c=1;
            }
            if(c) printf("No\n");
            else printf("Yes\n");
        }
    }
    return 0;
}

