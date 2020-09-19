#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define nl puts("")
struct component {
    int val;
    int modVal;
};
void mergeSort(struct component* nmbr, int lo, int hi)
{
    if(lo==hi) return;
    int mid=(lo+hi)/2;
    mergeSort(nmbr,lo,mid);
    mergeSort(nmbr,mid+1,hi);

    struct component temp[hi+2];

    for(int i=lo,j=mid+1,k=lo; k<=hi; ++k) {
        if(i==mid+1) temp[k]=nmbr[j++];
        else if(j==hi+1) temp[k]=nmbr[i++];
        else if(nmbr[i].modVal<nmbr[j].modVal) temp[k]=nmbr[i++];
        else if(nmbr[i].modVal>nmbr[j].modVal) temp[k]=nmbr[j++];
        else {
            if((nmbr[i].val & 1) && (nmbr[j].val & 1)) {
                if(nmbr[i].val>nmbr[j].val) temp[k]=nmbr[i++];
                else temp[k]=nmbr[j++];
            } else if(!(nmbr[i].val & 1) && !(nmbr[j].val & 1)) {
                if(nmbr[i].val>nmbr[j].val) temp[k]=nmbr[j++];
                else temp[k]=nmbr[i++];
            } else {
                if(nmbr[i].val & 1) temp[k]=nmbr[i++];
                else temp[k]=nmbr[j++];
            }
        }
    }
    for(int i=lo; i<=hi; ++i) nmbr[i]=temp[i];
}
int main()
{
    int n,m,v;
    while(scanf("%d%d",&n,&m)==2) {
        if(!n && !m) {
            printf("0 0\n");
            break;
        }
        struct component nmbr[n+2];
        for(int i=0; i<n; ++i) {
            scanf("%d",&v);
            nmbr[i].val=v;
            nmbr[i].modVal=v%m;
        }
        mergeSort(nmbr,0,n-1);
        printf("%d %d\n",n,m);
        for(int i=0; i<n; ++i)
            printf("%d\n",nmbr[i].val);
    }
    return 0;
}
