#include<bits/stdc++.h>
using namespace std;

vector <int> getVal(string& input)
{
    int len=input.length(),m=0,k=1;
    vector <int> number;
    for(int i=0; i<len; ++i) {
        if(input[i]>='0' && input[i]<='9') {
            if(i!=0 && input[i-1]=='-')
                k=-1;
            m=(m*10)+(input[i]-'0');
        }
        if(input[i]==' ' || i==len-1) {
            number.push_back(m*k);
            m=0;
            k=1;
        }
    }
    return number;
}

int kadaneAlgorithm(vector <int>& number)
{
    int max_here=0,result=0,len=number.size();
    for(int i=0; i<len; ++i) {
        max_here=max(0,max_here+number[i]);
        result=max(result,max_here);
    }
    return result;
}

int main()
{
    string input;
    while(getline(cin,input)) {
        vector <int> nmbr;
        nmbr=getVal(input);
        printf("%d\n",kadaneAlgorithm(nmbr));
        nmbr.resize(0);
    }

    return 0;
}
