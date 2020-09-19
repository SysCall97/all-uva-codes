#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,Case=1;
    scanf("%d",&t);
    getchar();
    while(t--) {
        char str[13][120];
        int arr[11];
        for(int i=0; i<10; ++i) {
            scanf("%s %d",str[i],&arr[i]);
        }
        printf("Case #%d:\n",Case++);
        int maxi=-1,cnt=0;
        for(int i=0; i<10; ++i) {
            if(arr[i]>maxi) {
                cnt=1;
                maxi=arr[i];
            } else if(maxi == arr[i])
                cnt++;
        }

        for(int i=0; i<cnt; ++i) {
            for(int j=0; j<10; ++j) {
                if(maxi==arr[j]) {
                    printf("%s\n",str[j]);
                    arr[j]=0;
                    break;
                }
            }
        }
    }
    return 0;
}

