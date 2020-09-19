#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n) {
        int i=0,sum=0;
        while(sum<n) {
            sum+=i;
            ++i;
        }
        sum=i;
        int k=i-1,l=i-2;
        if(k%2) l/=2;
        else k/=2;
        int s=(k*l)+1;
        int diff=n-s;
        int upper=1+diff,lower=sum-1-diff;
        if(!(sum%2)) {
            upper=upper^lower;
            lower=upper^lower;
            upper=upper^lower;
        }
        printf("TERM %d IS %d/%d\n",n,upper,lower);
    }
    return 0;
}

