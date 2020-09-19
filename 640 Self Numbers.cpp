#include<bits/stdc++.h>
using namespace std;
vector<bool> numbers(1100000,1);
int index(int n)
{
    int s=n;
    while(n) {
        s+=n%10;
        n/=10;
    }
    return s;
}
void func()
{
    for(int i=1; i<=1000000; ++i) {
        int indx=index(i);
        numbers[indx]=0;
    }
}
int main()
{
    func();
    for(int i=1; i<=1000000; ++i) {
        if(numbers[i])
            printf("%d\n",i);
    }
    return 0;
}

