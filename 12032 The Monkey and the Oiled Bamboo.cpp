#include<bits/stdc++.h>
using namespace std;
int findMaxIndex(vector < int >& diff)
{
    int index=0,last=diff.size();
    for(int i=1; i<last; ++i)
        if(diff[index]<diff[i])
            index=i;
    return index;
}
int main()
{
    int t,Case=0;
    scanf("%d",&t);
    while(t--) {
        int n,m;
        cin>>n;

        vector < int > heights;
        heights.push_back(0);
        for(int i=0; i<n; ++i) {
            cin>>m;
            heights.push_back(m);
        }
        if(n==1) {
            printf("Case %d: %d\n",++Case,m);
        } else {
            vector < int > diff;

            for(int i=1; i<=n; ++i)
                diff.push_back(heights[i]-heights[i-1]);

            int maxIndex=findMaxIndex(diff);
            int last=diff.size(),ans=diff[maxIndex];

            /*cout<<"differences: ";
            for(int i=0; i<last; ++i)
                cout<<diff[i]<<" ";
            cout<<'\n';
            cout<<"Maximum = "<<diff[maxIndex]<<'\n';
            cout<<"second maximum = "<<diff[secondMaxIndex]<<'\n';*/

            int psudoAns=ans-1;
            for(int i=maxIndex+1; i<last; ++i) {
                if(psudoAns==diff[i]) --psudoAns;
                else if(psudoAns<diff[i]) {
                    ++ans;
                    break;
                }
            }


            printf("Case %d: %d\n",++Case,ans);
        }
    }
    return 0;
}
