#include<bits/stdc++.h>
using namespace std;
#define Max 1000000
#define scan1(n) scanf("%d",&n)
#define scan2(n,m) scanf("%d%d",&n,&m)
#define printi1(n) printf("%d",n)
#define printi2(n,m) printf("%d %d\n",n,m)
#define fori(a,b) for(int i=a; i<b; ++i)
#define ford(a,b) for(int i=a; i>=b; --i)
#define nl puts("")
int arr[Max];
int main()
{
    int t;
    scan1(t);
    while(t--) {
        memset(arr,0,sizeof arr);
        int n,n1,n2,c=0;
        scan1(n);
        fori(0,n) {
            scan2(n1,n2);
            arr[i]=n1+n2;
        }
        --n;
        ford(n,1) {
            n1=arr[i];
            arr[i]=(n1+c)%10;
            c=(n1+c)/10;
        }
        arr[0]+=c;
        ++n;
        fori(0,n) printi1(arr[i]);
        nl;
        if(t) nl;
    }
    return 0;
}

