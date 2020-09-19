#include<bits/stdc++.h>
using namespace std;
int sumOfDivisors(int& n, int& k)
{
    int sum=0,i;
    for(i=1; i*i<n; ++i) {
        if(!(n%i)) {
            if(i%k) sum+=i;
            if((n/i)%k) sum+=(n/i);
        }
    }
    if(i*i==n && i%k) sum+=i;
    return sum;
}
int main()
{
    int m;
    cin>>m;
    while(m--) {
        int n,k;
        cin>>n>>k;
        if(k==1) printf("0\n");
        else printf("%d\n",sumOfDivisors(n,k));
    }
    return 0;
}

