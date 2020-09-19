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
    int N,T,n,i,j;
    cin>>T;
    for(i=0; i<T; i++) {
        cin>>N;
        int arr[10]= {0};
        while(N) {
            n=N;
            while(n) {
                j=n%10;
                arr[j]++;
                n/=10;
            }
            N--;
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
    }
    return 0;
}
