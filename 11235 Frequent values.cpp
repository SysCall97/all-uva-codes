/***************************************************************
 *    Name:  KAZI NUR  ALAM MASHRY                             *
 *  School:  MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY  *
 *           CSE (14TH BATCH)                                  *
 ***************************************************************/
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define el '\n'
#define x first
#define y second
#define pi acos(-1.0)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define mem(x,y) memset(x , y , sizeof(x))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PI;

void createSegmentTree(vector<ll>& freq, vector<ll>& tree, ll node, ll b, ll e) {
    if(b==e) {
        tree[node]=freq[b];
        return;
    }
    ll left=node*2, right=left+1, mid=(b+e)/2;
    createSegmentTree(freq,tree,left,b,mid);
    createSegmentTree(freq,tree, right,mid+1,e);
    tree[node]=max(tree[left], tree[right]);
    return;
}

ll query(vector<ll>& tree, ll node, ll b, ll e, ll i, ll j) {
    if(i>e || j<b) return -1;
    else if(b>=i && e<=j) return tree[node];
    ll left=node*2, right=left+1, mid=(b+e)/2;
    return max(query(tree, left, b, mid, i, j), query(tree, right, mid+1, e, i, j));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,q;
    while(cin>>n>>q && n) {
        vector<ll> v(n+1), freq(n+1);
        map<ll, ll> Map;
        for(ll i=1; i<=n; ++i) {
            cin>>v[i];
            ++Map[v[i]];
        }
        for(ll i=1; i<=n; ++i) freq[i]=Map[v[i]];
        Map.clear();
        vector<ll> tree(n*3);
        createSegmentTree(freq, tree, 1, 1, n);
        while(q--) {
            ll hi, lo, ans=-1;
            cin>>lo>>hi;
            if(lo!=1 && v[lo]==v[lo-1]) {
                ll cnt=1, j=lo+1;
                while(j<=n && v[lo]==v[j]) {
                    ++cnt;
                    ++j;
                }
                ans=max(cnt, ans);
                lo=j;
            }
            if(hi!=n && v[hi]==v[hi+1]) {
                ll cnt=1, j=hi-1;
                while(j>=1 && v[hi]==v[j]) {
                    ++cnt;
                    --j;
                }
                ans=max(cnt, ans);
                hi=j;
            }
            ans=max(ans, query(tree, 1, 1, n, lo, hi));

            cout<<ans<<el;
        }
    }
    return 0;
}


