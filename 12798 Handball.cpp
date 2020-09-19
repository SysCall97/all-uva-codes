#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,M;
    while(cin>>N>>M) {
        int counter=0,x;
        for(int i=0; i<N; ++i) {
            int cnt=0;
            for(int j=0; j<M; ++j) {
                cin>>x;
                if(x>0) cnt++;
            }
            if(cnt==M) counter++;
        }
        cout<<counter<<'\n';
    }
    return 0;
}
