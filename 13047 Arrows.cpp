#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    getchar();
    for(int Case=1; Case<=T; ++Case) {
        string str;
        getline(cin,str);
        int len=str.size(),lessThen=0,greaterThen=0,counterLess=0,counterGreater=0;
        int indexLess[51],indexGreater[51],l=0,g=0,maxi=0,ans=-1,maxl=0,maxg=0;
        for(int i=0; i<len; ++i) {
            if(str[i]=='<') {
                indexLess[l++]=i;
                lessThen++;
            }
            if(str[i]=='>') {
                indexGreater[g++]=i;
                greaterThen++;
            }
        }
        if(lessThen) {
            for(int i=0; i<lessThen; ++i) {
                counterLess=1;
                char ch=str[indexLess[i]+1];
                if(ch=='-' || ch=='=') {
                    for(int j=indexLess[i]+1; ; ++j) {
                        if(str[j]==ch) counterLess++;
                        else break;
                    }
                }
                    maxl=(maxl>counterLess)?maxl:counterLess;
            }
        }
        if(greaterThen) {
            for(int i=0; i<greaterThen; ++i) {
                counterGreater=1;
                char ch=str[indexGreater[i]-1];
                if(ch=='-' || ch=='=') {
                    for(int j=indexGreater[i]-1; ; --j) {
                        if(str[j]==ch) counterGreater++;
                        else break;
                    }
                }
                    maxg=(maxg>counterGreater)?maxg:counterGreater;
            }
        }


        maxi=(maxl>maxg)?maxl:maxg;
        ans=(maxi>0)?maxi:-1;
        printf("Case %d: %d\n",Case,ans);
    }

    return 0;
}

