#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string& str)
{
    int len=str.length(),in=len/2;
    for(int i=0; i<in; ++i) {
        if(str[i]!=str[len-i-1])
            return 0;
    }
    return 1;
}
bool mirror(char& a, char& b)
{
    if(a=='B' || a=='C' || a=='D' ||a=='F' || a=='G' || a=='K' ||a=='N' || a=='P' || a=='Q' || a=='R' || a=='4' || a=='6' || a=='7' || a=='9')
        return 0;
    else {
        if((a=='E' && b=='3') || (a=='3' && b=='E')) return 1;
        else if((a=='J' && b=='L') || (a=='L' && b=='J')) return 1;
        else if((a=='S' && b=='2') || (a=='2' && b=='S')) return 1;
        else if((a=='Z' && b=='5') || (a=='5' && b=='Z')) return 1;
        else if((a=='A' && b=='A')) return 1;
        else if((a=='T' && b=='T')) return 1;
        else if((a=='H' && b=='H')) return 1;
        else if((a=='I' && b=='I')) return 1;
        else if((a=='M' && b=='M')) return 1;
        else if((a=='O' && b=='O')) return 1;
        else if((a=='U' && b=='U')) return 1;
        else if((a=='V' && b=='V')) return 1;
        else if((a=='W' && b=='W')) return 1;
        else if((a=='X' && b=='X')) return 1;
        else if((a=='Y' && b=='Y')) return 1;
        else if((a=='1' && b=='1')) return 1;
        else if((a=='8' && b=='8')) return 1;
    }
    return 0;
}
bool isMirror(string& str)
{
    int len=str.length(),in=len/2;
    for(int i=0; i<=in; ++i) {
        if(!mirror(str[i],str[len-i-1]))
            return 0;
    }
    return 1;
}
int main()
{
    string test;
    while(getline(cin,test)) {
        bool p=isPalindrome(test);
        bool m=isMirror(test);
        if(!p && !m) cout<<test<<" -- is not a palindrome."<<'\n';
        else if(p && !m) cout<<test<<" -- is a regular palindrome."<<'\n';
        else if(!p && m) cout<<test<<" -- is a mirrored string."<<'\n';
        else cout<<test<<" -- is a mirrored palindrome."<<'\n';
        cout<<'\n';
    }

    return 0;
}
