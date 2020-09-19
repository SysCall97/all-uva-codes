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
const ll MOD = 1000000007;
const int MAX = 2003;
ll jack[1000005],jill[1000005];

int binary_search(ll item, ll a[], int high) {
    int low=0,mid;
    bool flag=false;
    while(low<=high) {
        mid=(high+low)/2;
        if(a[mid]==item) {
            flag=true;
            break;
        } else if(a[mid]<item) low=mid+1;
        else high=mid-1;
    }
    if(flag==true) return 1;
    else return 0;
}

int func(int N, int M) {
    int i,flag=0;
    if(N<=M) {
        for(i=0; i<N; i++)
            flag+=binary_search(jack[i],jill,M-1);
    } else {
        for(i=0; i<M; i++)
            flag+=binary_search(jill[i],jack,N-1);
    }
    return flag;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N,M,i,ans;
    while(cin>>N>>M) {
        if(N==0 && M==0) break;
        for(i=0; i<N; i++) cin>>jack[i];
        for(i=0; i<M; i++) cin>>jill[i];
        ans=func(N,M);
        printf("%d\n",ans);
    }
    return 0;
}
