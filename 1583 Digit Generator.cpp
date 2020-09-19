#include<bits/stdc++.h>
using namespace std;
int digitSum(int n)
{
    char nmbr[12];
    sprintf(nmbr,"%d",n);
    int ans=0;
    for(int i=0; nmbr[i]; ++i)
        ans+=nmbr[i]-'0';
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int first=(n>55)?n-55:1,found=1,sum;
        for(int i=first; i<n; ++i) {
            sum=i+digitSum(i);
            if(sum==n) {
                printf("%d\n",i);
                found=0;
                break;
            }
        }
        if(found) printf("0\n");
    }
    return 0;
}

