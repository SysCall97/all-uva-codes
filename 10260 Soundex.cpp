#include<bits/stdc++.h>
using namespace std;
int func(char& ch)
{
    if(ch=='B' || ch=='F' || ch=='P' || ch=='V') return 1;
    else if(ch=='C' || ch=='G' || ch=='J' || ch=='K' || ch=='Q' || ch=='S' || ch=='X' || ch=='Z') return 2;
    else if(ch=='D' || ch=='T') return 3;
    else if(ch=='L') return 4;
    else if(ch=='M' || ch=='N') return 5;
    else if(ch=='R') return 6;
    return 0;
}
int main()
{
    string input;
    while(getline(cin,input)) {
        int len=input.length(),m,prev=0;
        for(int i=0; i<len; ++i) {
            m=func(input[i]);
            if(m && m!=prev)
                printf("%d",m);
            prev=m;
        }
        puts("");
    }

    return 0;
}

