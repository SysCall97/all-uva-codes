#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
vector<int> vec;
void preCall()
{
    for(int i=1; i<38000; ++i) {
        for(int j=1; j<=i; ++j) {
            char str[7];
            sprintf(str,"%d",j);
            int k=0;
            while(str[k]) vec.push_back(str[k++]-'0');
        }
    }
}
int main()
{
    preCall();
    long long t,n;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld",&n);
        cout<<vec[n-1]<<'\n';
    }
    return 0;
}

