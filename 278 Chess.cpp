#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
int main() {
    int t,a,b,ans;
    char c;
    scanf("%d",&t);
    ignore;
    while(t--) {
        cin>>c>>a>>b;
        if(c=='r') ans=(a>b)?b:a;
        else if(c=='k') {
            if(a%2==0 || b%2==0) ans=(a*b)/2;
            else ans=((a+1)*(b+1)+(a-1)*(b-1))/4;
        }
        else if(c=='Q') {
            if(a%2==1 && b%2==1) ans=(a<b)?a:b;
            else if(a%2==0 && b%2==0) ans=(a<b)?a:b;
            else ans=(a<b)?a:b;
        }
        else if(c=='K') {
            if(a%2==0 && b%2==0) ans=a*b/4;
            else if(a%2==1 && b%2==1) ans=(a+1)*(b+1)/4;
            else {
                int even=(a%2==0)?a:b;
                int odd=(a%2==1)?a:b;
                ans=even*(odd+1)/4;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}

