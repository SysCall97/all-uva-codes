#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long arr[]={0,0,0,0,0,0,0,0,40320,362880,3628800,39916800,479001600,6227020800};
    int n;
    while(cin>>n) {
        if((n<8 && n>=0) || (n<0 && n%2==0)) printf("Underflow!\n");
        else if((n>13 && n>=0) || (n<0 && n%2!=0)) printf("Overflow!\n");
        else printf("%lld\n",arr[n]);
    }
    return 0;
}
