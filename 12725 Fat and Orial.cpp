#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i;
    scanf("%lld",&t);
    for(i=0; i<t; ++i) {
        double currentGrade,desiredGrade,disCompleted,disRemain;
        scanf("%lf%lf%lf%lf",&currentGrade,&desiredGrade,&disCompleted,&disRemain);

        double totalGradeDesired = desiredGrade * ( disCompleted + disRemain );

        double totalGradeAchived = currentGrade * disCompleted;

        double totalRemainingGrade = totalGradeDesired - totalGradeAchived;

        double ans = totalRemainingGrade / disRemain;
        if(ans>10 || ans<0) printf("Case #%lld: Impossible\n",i+1);
        else {
            printf("Case #%ld: ",i+1);
            printf("%.2lf\n",ans);
        }
    }
    return 0;
}
