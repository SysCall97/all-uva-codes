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
    int N,arr[12],i,u_flag,l_flag,count;
    scanf("%d",&N);
    printf("Lumberjacks:\n");
    while(N--) {
        u_flag=l_flag=count=0;
        for(i=0; i<10; i++) {
            scanf("%d",&arr[i]);
            if(i==1) {
                if(arr[i]>arr[i-1]) u_flag++;
                else l_flag++;
            }
            if((i>1) && ((u_flag==1 && arr[i]<arr[i-1]) || (l_flag==1 && arr[i]>arr[i-1]))) count++;
        }
        if(count==0) printf("Ordered\n");
        else printf("Unordered\n");
    }
    return 0;
}
