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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    cin.ignore();
    while(n--) {
        string inp,dbl,fnl[110];
        char ch;
        getline(cin,inp);
        dbl=inp+inp;
        ll sz1=inp.size();
        ll mini=66,k=0;
        for(ll i=0; i<sz1; ++i) {
            if(mini>inp[i]-'A') mini=inp[i]-'A';
        }
        ch=mini+'A';

        for(ll i=0; i<101; ++i) fnl[i]="";

        for(ll strt=0; strt<sz1; ++strt) {
            if(dbl[strt]==ch) {
                for(ll lst=strt; lst<strt+sz1; ++lst) fnl[k]+=dbl[lst];
                k+=1;
            }
        }

        dbl=fnl[0];
        for(ll i=1; i<k; ++i) {
            if(dbl>fnl[i]) dbl=fnl[i];
        }

        cout<<dbl<<el;
        inp.clear();
    }

    return 0;
}
