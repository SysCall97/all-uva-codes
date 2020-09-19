#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    for(int i=0; i<=110001; i++) {
        int k=i;
        while(k) {
            n+=(k%10);
            k/=10;
        }
    }
    cout<<n;

    return 0;
}
