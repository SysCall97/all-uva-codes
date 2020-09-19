#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,h,o;
    while(cin>>p>>h>>o) {
        if(o-p>=h) printf("Props win!\n");
        else printf("Hunters win!\n");
    }
    return 0;
}
