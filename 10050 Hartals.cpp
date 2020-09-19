#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int p,f;
        bool arr[101][3655];
        memset(& arr,false,sizeof arr);
        cin>>p;
        for(int i=1; i<=p; ++i) {
            cin>>f;
            for(int j=0+f; j<=n; j+=f) {
                arr[i][j]=true;
            }
        }
        bool hartal[3655];
        memset(hartal,false,sizeof hartal);
        for(int i=1; i<=n; ++i) {
            for(int j=1; j<=p; ++j) {
                if(arr[j][i]) {
                    hartal[i]=1;
                    break;
                }
            }
        }
        int j=0,k=1,ans=0;
        for(int i=1; i<=n; i+=k) {
            if(hartal[i]) ++ans;
            ++j;
            k=1;
            if(j==5) {
                k=3;
                j=0;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}

