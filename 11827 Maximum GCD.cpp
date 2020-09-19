#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll> divisors;
void getDivisor(ll n)
{
    ll i;
    for(i=1; i*i<=n; i++) {
        if(!(n%i)) {
            divisors.push_back(i);
            divisors.push_back(n/i);
        }
    }
    if((i-1)*(i-1)==n)
        divisors.pop_back();
}
vector <ll> getNumbers(string input)
{
    ll number=0;
    ll len=input.length();
    vector <ll> nmbr;
    for(ll i=0; i<len; ++i){
        if(input[i]!=' ') {
            number=(number*10)+(input[i]-'0');
        }
        if(input[i]==' ' || i==len-1) {
            if(number!=0) {
                nmbr.push_back(number);
                number=0;
            }
        }
    }
    return nmbr;
}
int main()
{
    ll n;
    scanf("%lld",&n);
    getchar();
    while(n--) {
        string input;
        getline(cin,input);

        vector <ll> numbers=getNumbers(input);

        ll len=numbers.size();
        for(ll i=0; i<len; ++i)
            getDivisor(numbers[i]);

        sort(divisors.begin(),divisors.end());

        len=divisors.size();
        ll tempElement=divisors[len-1];

        for(ll i=len-2; i>=0; i--) {
            if(tempElement==divisors[i]) {
                printf("%lld\n",tempElement);
                break;
            }
            tempElement=divisors[i];
        }

        divisors.resize(0);
    }
    return 0;
}

