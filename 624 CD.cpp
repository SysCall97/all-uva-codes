#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define el '\n'
int n,m,t,minimum;
vector<int> len;
vector<int> path;
vector<int> ans;

void func(int pos, int val) {
    if(pos==m) {
        if(val<minimum) {
            minimum=val;
            ans.clear();
            int length=path.size();
            for(int i=0; i<length; ++i) ans.push_back(path[i]);
        }
        return;
    }

    if(val>=len[pos]) {
        path.push_back(len[pos]);
        func(pos+1,val-len[pos]);
        path.pop_back();
    }

    func(pos+1,val);

    return;
}

int main() {
    while(cin>>n>>m) {
        len.clear();
        for(int i=0; i<m; ++i) {
            cin>>t;
            len.push_back(t);
        }
        minimum=n+10;
        func(0,n);
        int length=ans.size();
        for(int i=0; i<length; ++i) cout<<ans[i]<<" ";
        cout<<"sum:"<<n-minimum<<el;
    }

    return 0;
}
