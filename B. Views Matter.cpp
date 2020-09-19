/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,sum=0;
    cin>>n>>m;
    vector<ll> height(n);
    for(ll i=0; i<n; ++i) cin>>height[i];

    sort(all(height));
    ll maxi=height[n-1];

    for(ll i=n-1; i>=0; --i) {
        if(maxi==0) {
            --height[i];
        } else if(maxi<=height[i]) {
            --height[i];
            --maxi;
        } else {
            height[i+1]=height[i+1]-(maxi-height[i]);
            --height[i];
            maxi=height[i];
        }
    }
    for(auto i:height) sum+=i;
    cout<<sum-maxi<<el;
    return 0;
}

