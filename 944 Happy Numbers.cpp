#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll happy_numbers[]= {1, 7, 10, 13, 19, 23, 28, 31, 32, 44, 49, 68, 70, 79, 82, 86, 91, 94,97, 100};
ll iterations_numbers[]= {0, 5, 1, 2, 4, 3, 3, 2, 3, 4, 4, 2, 5, 3, 3, 2, 4, 4, 3, 1};

void happyNumber(ll n)
{
    ll m=n,n1=n,counter=1;
    while(m>100) {
        m=0;
        while(n) {
            m+=((n%10)*(n%10));
            n/=10;
        }
        n=m;
        counter++;
    }
    ll low=0,found=0,mid;
    ll high=20;
    while(low<=high) {
        mid=(low+high)/2;
        if(happy_numbers[mid]>m) {
            high=mid-1;
        } else if(happy_numbers[mid]<m) {
            low=mid+1;
        } else {
            printf("%lld %lld\n",n1,counter+iterations_numbers[mid]);
            break;
        }
    }
}

int main()
{
    ll L,H,l=0;
    while(scanf("%lld%lld",&L,&H)==2) {
        l++;
        if(l>1)
            printf("\n");
        for(ll i=L; i<=H; i++)
            happyNumber(i);
    }
    return 0;
}
