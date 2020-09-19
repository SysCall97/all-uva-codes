#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define el '\n'
int main()
{
    long long prb[14],
              prbReq[14],
              s,
              prbInHand,
              Case=1;
    while(cin>>s) {
        if(s<0) break;
        for(int i=1; i<=12; ++i) cin>>prb[i];
        for(int i=1; i<=12; ++i) cin>>prbReq[i];
        cout << "Case " << Case << ":" << el;
        ++Case;
        prbInHand=s;
        for(int i=1; i<=12; ++i) {
            if(prbInHand>=prbReq[i]) {
                cout << "No problem! :D" <<el;
                prbInHand-=prbReq[i];
            } else {
                cout << "No problem. :(" << el;
            }
            prbInHand+=prb[i];
        }
    }


    return 0;
}

