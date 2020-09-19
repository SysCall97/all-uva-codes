#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1) {
        vector < string > str;
        string s;
        int cnt=0;
        getchar();
        for(int i=0; i<n; ++i) {
            getline(cin,s);
            str.push_back(s);
        }
        int counter[28];
        memset(counter,0,sizeof(counter));

        for(int i=0; i<n; ++i) {
            int len=str[i].length();
            for(int j=0; j<len; ++j) {
                int index;
                if(str[i][j]>='a' && str[i][j]<='z') index=str[i][j]-'a';
                else if(str[i][j]>='A' && str[i][j]<='Z') index=str[i][j]-'A';
                else continue;
                counter[index]++;
                if(counter[index]==1) cnt++;
            }
        }

        for(int i=0; i<26 && cnt; ++i) {
            int index=0,maximum=0;
            for(int j=0; j<26; ++j) {
                if(counter[j]>maximum && counter[j]) {
                    maximum=counter[j];
                    index=j;
                }
            }
            printf("%c %d\n",'A'+index,maximum);
            counter[index]=0;
            cnt--;
        }
    }
    return 0;
}

