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
        int len=input.length();
        if(len<=2) {
            if(input[0]=='1' || input[0]=='4' || (input[0]=='7' && input[1]=='8'))
                printf("+\n");
        }
        else {
            if(input[len-2]=='3' && input[len-1]=='5') {
                if(input[0]=='1' || input[0]=='4' || (input[0]=='7' && input[1]=='8'))
                printf("-\n");
            } else if(input[0]=='9' && input[len-1]=='4') {
                if(input[1]=='1' || input[1]=='4' || (input[1]=='7' && input[2]=='8'))
                printf("*\n");
            } else if(input[0]=='1' && input[1]=='9' && input[2]=='0') {
                if(input[3]=='1' || input[3]=='4' || (input[3]=='7' && input[4]=='8'))
                printf("?\n");
            }
        }
    }
    return 0;
}

