#include<bits/stdc++.h>
using namespace std;
bool arr[5100];
bool isRepeated(int n)
{
    int arr1[]= {0,0,0,0,0,0,0,0,0,0};
    while(n) {
        int l=n%10;
        arr1[l]++;
        if(arr1[l]>1) return 1;
        n/=10;
    }
    return 0;
}
void func()
{
    for(int i=1; i<5001; ++i) {
        if(isRepeated(i)) arr[i]=0;
        else arr[i]=1;
    }
}
int main()
{
    func();
    int N,M;
    while (scanf("%d%d",&N,&M)==2) {
        int counter=0;
        for(int i=N; i<=M; i++) {
            if(arr[i])
                counter++;
        }
        cout<<counter<<'\n';
    }
    return 0;
}
