#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n) {
        int indx=0,arr[1500],m;
        for(int i=0; i<n; ++i) {
            cin>>m;
            if(m) arr[indx++]=m;
        }
        if(!indx) printf("0\n");
        else {
            printf("%d",arr[0]);
            for(int i=1; i<indx; ++i)
                printf(" %d",arr[i]);
            printf("\n");
        }
    }
    return 0;
}
