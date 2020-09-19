#include<bits/stdc++.h>
using namespace std;
int arr[510][510];
int main()
{
    int row,coloumn;
    while(scanf("%d%d",&row,&coloumn)==2) {
        if(row==0 && coloumn==0)
            return 0;
        memset(arr, 1, sizeof(arr[0][0]) * 510 * 510);

        int ans=0;
        for(int i=1; i<=row; ++i ) {
            for(int j=1; j<=coloumn; ++j) {
                if(arr[i][j]) ans++;
                //if(arr[i][j]) printf("1 ");
                //else printf("0 ");
            }
            //printf("\n");
        }
        //printf("\n");
        printf("%d knights may be placed on a %d row %d column board.\n",ans,row,coloumn);
    }
    return 0;
}
