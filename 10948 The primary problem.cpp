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
#define Max 1500000
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
int HIGH;
bool table[Max]= {0};
int prime[Max/10];
void seieve() {
    prime[0]=2;
    prime[1]=3;
    int i,j,k=4,n=Max;
    for(i=5; i<=n; i+=k) {
        for(j=2*i; j<=n; j+=i) {
            table[j]=1;
        }
        if(k==2) k=4;
        else k=2;
    }
    k=4;
    for(i=5,j=2; i<=n; i+=k) {
        if(table[i]==0) {
            prime[j]=i;
            j++;
        }
        if(k==2) k=4;
        else k=2;
    }
}


int HIGH_func(int n) {
    int low=0,high=100000,mid;
    while(low<=high) {
        mid=(high+low)/2;
        if(prime[mid]==n || (prime[mid]>n && prime[mid-1]<n) || ((prime[mid]<n && prime[mid-1]>n))) return mid;
        else if(prime[mid]<n) low=mid-1;
        else high=mid+1;
    }
}
bool func(int diff, int low) {
    int mid,high=HIGH;

    while(low<=high) {
        mid=(high+low)/2;
        if(prime[mid]==diff)
            return 1;
        else if(prime[mid]<diff)
            low=mid+1;
        else
            high=mid-1;
    }
    return 0;
}
int main() {
    seieve();
    int n,i,diff;
    bool flag;
    while(scanf("%d",&n)==1) {
        if(n==0)
            return 0;
        else {
            flag=0;
            HIGH=HIGH_func(n);
            for(i=0; i<=HIGH; i++) {
                diff=n-prime[i];
                flag=func(diff,i);
                if(flag==1)
                    break;
            }
            if(flag==1)
                printf("%d:\n%d+%d\n",n,prime[i],diff);
            else
                printf("%d:\nNO WAY!\n",n);
        }
    }
    return 0;
}


