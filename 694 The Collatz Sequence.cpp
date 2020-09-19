#include<bits/stdc++.h>
using namespace std;
long long algo(long long A,long long L)
{
    long long counter=0;
    while(A!=1 && A<=L) {
        if(A%2)
            A=3*A+1;
        else
            A/=2;
        counter++;
    }
    if(A==1)
        counter++;
    return counter;
}
int main()
{
    long long A,L,Case=0;
    while(scanf("%lld%lld",&A,&L)==2) {
        if(A<0 && L<0)
            return 0;
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",++Case,A,L,algo(A,L));
    }

    return 0;
}

