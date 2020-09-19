#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--) {
        string input;
        getline(cin,input);
        int len=input.length(),k;
        double arr[6],nmbr;
        memset(arr,0,sizeof(arr));
        for(int i=0; i<len; ++i) {

            if(input[i]=='C' || input[i]=='H' || input[i]=='N' || input[i]=='O') {
                if((i+1)==len || (input[i+1]=='C' || input[i+1]=='H' || input[i+1]=='N' || input[i+1]=='O')) {
                    nmbr=1;
                } else if(input[i+1]>='0' && input[i+1]<='9') {
                    if(input[i+2]>='0' && input[i+2]<='9') {
                        nmbr=10*(input[i+1]-'0')+(input[i+2]-'0');
                        k=3;
                    } else
                        nmbr=(input[i+1]-'0');
                }
                if(input[i]=='C') arr[0]+=nmbr;
                else if(input[i]=='H') arr[1]+=nmbr;
                else if(input[i]=='N') arr[2]+=nmbr;
                else if(input[i]=='O') arr[3]+=nmbr;
            }
        }
        double ans=(12.01*arr[0])+(1.008*arr[1])+(14.01*arr[2])+(16.00*arr[3]);
        printf("%0.3lf\n",ans);
    }
    return 0;
}

