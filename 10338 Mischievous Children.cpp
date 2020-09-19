#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[22];
ll factorial()
{
    dp[0]=1;
    for(ll i=1; i<21; ++i)
        dp[i]=dp[i-1]*i;
}
int main()
{
    factorial();
    ll t,Case=0;
    scanf("%d\n",&t);
    while(t--) {
        string input;
        ll ans,letter[27];
        memset(letter,0,sizeof letter);
        getline(cin,input);
        ll len=input.length();
        ans=dp[len];
        for(int i=0; i<len; ++i)
            ++letter[input[i]-'A'];
        for(int i=0; i<26; ++i)
            ans/=dp[letter[i]];
        printf("Data set %lld: %lld\n",++Case,ans);
    }
    return 0;
}

