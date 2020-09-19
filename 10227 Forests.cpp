#include<bits/stdc++.h>
using namespace std;
#define ignore getchar()
#define el '\n'
int parent[101];
class Person {
public:
    int tree[101];
    int last;
    int sum;
    Person() {
        last=-1;
        sum=0;
    }
    void Sort() {
        sort(tree,tree+last);
    }
};

int main() {
    int tc,P,T,p,t;
    cin>>tc;
    while(tc--) {
        cin>>P>>T;
        for(int i=1; i<=P; ++i) parent[i]=1;
        Person prsn[100];
        while(cin>>p>>t) prsn[p].tree[++prsn[p].last]=t,prsn[p].sum+=t;


    }

    return 0;
}

