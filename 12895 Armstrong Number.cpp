#include<bits/stdc++.h>
using namespace std;
int pow(int n, int power)
{
    int ans=1;
    for(int i=0; i<power; ++i) {
        ans *= n;
    }
    return ans;
}
bool isArmstrong(int n)
{
    int power=log10(n)+1;
    int sum=0;
    int m=n;
    while(n) {
        sum += pow(n%10,power);
        n /= 10;
    }
    if(sum==m)
        return 1;
    else
        return 0;
}

int main()
{
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if(isArmstrong(n))
            cout<<"Armstrong"<<endl;
        else
            cout<<"Not Armstrong"<<endl;
    }

    return 0;
}

