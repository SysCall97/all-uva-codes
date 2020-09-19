#include<bits/stdc++.h>
using namespace std;
int powr(int a, int b)
{
    int ans=1;
    for(int i=1; i<=b; ++i)
        ans*=a;
    return ans;
}
int binary(int n)
{
    int counter=0;
    while(n) {
        if(n%2)
            counter++;
        n/=2;
    }
    return counter;
}
int hexadecimalToDecimal(int m)
{
    int len=log10(m),number=0,pwr=powr(10,len);
    while(m) {
        number+=(m/pwr)*powr(16,len);
        m%=pwr;
        len--;
        pwr/=10;
    }
    return binary(number);
}
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int m;
        cin>>m;
        cout<<binary(m)<<" "<<hexadecimalToDecimal(m)<<'\n';
    }
    return 0;
}
