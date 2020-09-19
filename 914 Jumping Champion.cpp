#include<bits/stdc++.h>
using namespace std;
#define Max 2000000
bool table[Max]= {0};
int prime[Max/2];
void seieve()
{
    int i,j,k=4,n=Max;
    for(i=5; i*i<=n; i+=k) {
        for(j=2*i; j<=n; j+=i) {
            table[j]=1;
        }
        k=(k==2)?4:2;
    }
    k=4;
    for(i=5,j=2; i<=n; i+=k) {
        if(table[i]==0) {
            prime[j]=i;
            j++;
        }
        k=(k==2)?4:2;
    }
    prime[0]=2,prime[1]=3;
}

int indexFinder(int n)
{
    if(!n) return 0;
    for(int i=0; ; ++i)
        if(prime[i]>=n) return (prime[i]>n)?i-1:i;
}

int main()
{
    seieve();
    int t;
    cin>>t;
    while(t--) {
        int first,last,differ;
        cin>>first>>last;

        int first_index=indexFinder(first);
        int last_index=indexFinder(last);
        if(prime[first_index]<first) ++first_index;
        if(prime[last_index]>last) --last_index;
        if(first_index>=last_index) {
            printf("No jumping champion\n");
            continue;
        }

        vector < int > diff;
        for(int i=first_index+1; i<=last_index; ++i) {
            diff.push_back(prime[i]-prime[i-1]);
        }

        sort(diff.begin(),diff.end());

        int cnt=1,len=diff.size();
        int maximum=1,prevMaximum=0,nmbr=diff[0];
        for(int i=1; i<len; ++i) {
            if(diff[i]==diff[i-1]) cnt++;
            else {
                if(maximum<=cnt) {
                    prevMaximum=maximum;
                    maximum=cnt;
                    nmbr=diff[i-1];
                }
                cnt=1;
            }
        }

        if(maximum==prevMaximum) printf("No jumping champion\n");
        else printf("The jumping champion is %d\n",nmbr);

        diff.resize(0);
    }

    return 0;
}
