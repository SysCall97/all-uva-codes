#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s)) {
        int len=s.length();
        for(int i=0; i<len; ++i) {
            if(s[i]==']') printf("p");
            else if(s[i]=='[') printf("o");
            else if(s[i]=='p' || s[i]=='P') printf("i");
            else if(s[i]=='o' || s[i]=='O') printf("u");
            else if(s[i]=='i' || s[i]=='I') printf("y");
            else if(s[i]=='u' || s[i]=='U') printf("t");
            else if(s[i]=='y' || s[i]=='Y') printf("r");
            else if(s[i]=='t' || s[i]=='T') printf("e");
            else if(s[i]=='r' || s[i]=='R') printf("w");
            else if(s[i]=='e' || s[i]=='E') printf("q");
            else if(s[i]==39) printf("l");
            else if(s[i]==';') printf("k");
            else if(s[i]=='l' || s[i]=='L') printf("j");
            else if(s[i]=='k' || s[i]=='K') printf("h");
            else if(s[i]=='j' || s[i]=='J') printf("g");
            else if(s[i]=='h' || s[i]=='H') printf("f");
            else if(s[i]=='g' || s[i]=='G') printf("d");
            else if(s[i]=='f' || s[i]=='F') printf("s");
            else if(s[i]=='d' || s[i]=='D') printf("a");
            else if(s[i]=='.') printf("m");
            else if(s[i]==',') printf("n");
            else if(s[i]=='m' || s[i]=='M') printf("b");
            else if(s[i]=='n' || s[i]=='N') printf("v");
            else if(s[i]=='b' || s[i]=='B') printf("c");
            else if(s[i]=='v' || s[i]=='V') printf("x");
            else if(s[i]=='c' || s[i]=='C') printf("z");
            else printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}

