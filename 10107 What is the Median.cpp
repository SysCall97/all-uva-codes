#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
void MergeSort(vector <long long>& nmbr, long long high, long long low)
{
    if(low==high) return;
    long long mid=(low+high)/2;
    MergeSort(nmbr,mid,low);
    MergeSort(nmbr,high,mid+1);
    long long temp[high+1];
    for(long long i=low, j=mid+1, k=low; k<=high; ++k) {
        if(i==mid+1) temp[k]=nmbr[j++];
        else if(j==high+1) temp[k]=nmbr[i++];
        else if(nmbr[i]<nmbr[j]) temp[k]=nmbr[i++];
        else temp[k]=nmbr[j++];
    }

    for(int i=low; i<=high; ++i) nmbr[i]=temp[i];
}

int main()
{
    long long n,Size=0,ans;
    vector < long long > nmbr;
    while(scanf("%lld",&n)==1) {
        nmbr.push_back(n);
        ++Size;
        if(Size==1) printf("%lld\n",nmbr[0]);
        else {
            MergeSort(nmbr,Size-1,0);
            if(Size & 1) ans=nmbr[Size>>1];
            else ans=(long long)((nmbr[Size>>1]+nmbr[(Size>>1)-1])/2);
            printf("%lld\n",ans);
        }
    }
    for(int i=0; i<Size; ++i) printf("%lld  ",nmbr[i]);
    return 0;
}

