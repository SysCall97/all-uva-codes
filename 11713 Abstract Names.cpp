#include<bits/stdc++.h>
using namespace std;
bool func(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return 1;
    return 0;
}
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--) {
        string inp1,inp2;
        getline(cin,inp1);
        getline(cin,inp2);
        if(inp1.length()!=inp2.length()) printf("No\n");
        else {
            bool b=true;
            for(int i=0; inp1[i] && b; ++i) {
                if(inp1[i]!=inp2[i]) {
                    if(func(inp1[i])==0 || func(inp2[i])==0)
                        b=false;
                }
            }
            if(b) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}

