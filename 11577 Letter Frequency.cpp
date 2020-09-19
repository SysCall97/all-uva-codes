#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--) {
        string str;
        int arr[27];
        memset(arr,0,sizeof(arr));
        getline(cin,str);
        int len=str.length();
        std::transform(str.begin(), str.end(), str.begin(), ::tolower);
        for(int i=0; i<len; ++i)
            arr[str[i]-'a']++;
        int maximum=arr[0];
        for(int i=1; i<27; i++)
            if(maximum<arr[i])
                maximum=arr[i];
        for(int i=0; i<27; i++)
            if(maximum==arr[i])
                printf("%c",'a'+i);
        printf("\n");
    }
    return 0;
}

