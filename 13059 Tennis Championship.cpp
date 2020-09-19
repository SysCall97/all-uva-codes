#include<bits/stdc++.h>
using namespace std;

string substract(string str)
{
    int len=str.size()-1,n=1;
    for(int i=len; i>=0 && n==1; i--) {
        int m=(str[i]-'0')-n;
        n=0;
        if(m==-1) {
            m=9;
            n=1;
        }
        str[i]=m+'0';
    }
    return str;
}

int main()
{
    char numberOfPlayers[100];
    while(scanf("%s",numberOfPlayers)!=EOF) {

    if(numberOfPlayers[0]=='1' && !numberOfPlayers[1])
        cout<<0<<endl;
    else
        cout<<substract(numberOfPlayers)<<endl;}
    return 0;
}
