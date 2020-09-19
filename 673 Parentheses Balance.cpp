#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
#define s1 '('
#define s2 ')'
#define s3 '['
#define s4 ']'
int main()
{
    int t;
    scanf("%d",&t);
    ignore;
    while(t--) {
        string inp;
        getline(cin,inp);
        bool b=1;
        stack<char>hunt;

        for(int i=0; inp[i]; ++i) {
            if(inp[i]==s1) hunt.push(s2);
            else if(inp[i]==s3) hunt.push(s4);
            else {
                char ch=hunt.empty()?'\0':hunt.top();
                if(hunt.empty() || ch!=inp[i]) {
                    b=0;
                    break;
                } else if(ch==inp[i]) hunt.pop();
            }
        }
        if(!b || !hunt.empty()) printf("No\n");
        else printf("Yes\n");
        while(!hunt.empty()) hunt.pop();
        inp.clear();
    }

    return 0;
}

