#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1 && n) {
        bool matrix[110][110];
        int sum_row[110],sum_coloumn[110];
        memset(sum_coloumn,0,sizeof(sum_coloumn));
        memset(sum_row,0,sizeof(sum_row));
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cin>>matrix[i][j];
                if(matrix[i][j]) {
                    sum_row[i]++;
                    sum_coloumn[j]++;
                }
            }
        }
        int row=0,coloumn=0,row_bit,coloumn_bit;
        for(int i=0; i<n; i++) {
            if(sum_row[i]%2) {
                row++;
                row_bit=i+1;
            }
            if(sum_coloumn[i]%2) {
                coloumn++;
                coloumn_bit=i+1;
            }
        }
        if(!row && !coloumn)
            printf("OK\n");
        else if(row!=coloumn || row>1 || coloumn>1)
            printf("Corrupt\n");
        else
            printf("Change bit (%d,%d)\n",row_bit,coloumn_bit);
    }
    return 0;
}

