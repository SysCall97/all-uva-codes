#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define el '\n'
int main() {
    double a,b,c;
    double n,m;
    while(cin>>a>>b>>n) {
        double d=2;
        bool x=0;
        while(1) {
            for(c=1; c<d; ++c) {
                m=(c/d)-(a/b);
                if(m<=n && m>0) {
                    x=1;
                    break;
                }
            }
            if(x) break;
            ++d;
        }
        cout << c << " " << d << el;
    }
    return 0;
}

