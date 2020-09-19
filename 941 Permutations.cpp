#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
#define ll long long
vector<char> ch;
ll factorial[21];
ll m,n,N;

void fact()
{
    factorial[0] = 1;
    for(ll i=1; i<21; ++i) factorial[i] = i*factorial[i-1];
}

void stringSort(ll lo, ll hi)
{
    if(lo == hi) return;
    ll mid = (lo+hi)>>1;
    stringSort(lo,mid);
    stringSort(mid+1,hi);

    char temp[50];
    for(ll i=lo,j=mid+1,k=lo; k<=hi; ++k) {
        if(i==mid+1) temp[k] = ch[j++];
        else if(j==hi+1) temp[k] = ch[i++];
        else if(ch[i]<ch[j]) temp[k] = ch[i++];
        else temp[k] = ch[j++];
    }

    for(ll i=lo; i<=hi; ++i) ch[i] = temp[i];
}

int main()
{
    fact();
    ll t;
    scanf("%lld",&t);
    while(t--) {
        ignore;
        string inp;
        getline(cin,inp);
        scanf("%lld",&n);
        ll len=inp.size();
        for(ll i=0; i<len; ++i) ch.push_back(inp[i]);
        inp.clear();
        stringSort(0,len-1);
        N=n;
        for(ll i=0; i<len; ++i) {
            m = N / factorial[len-i-1];
            N = N - (m * factorial[len-i-1]);
            inp.push_back(ch[m]);
            for(ll j=m+1; ch[j]; ++j) ch[j-1] = ch[j];
        }
        cout << inp;
        nl;
        inp.clear();
        ch.clear();
    }

    return 0;
}

