#include<stdio.h>

void main()
{
    unsigned long long m,n,k,per=1000000007,ans,x,y;
    unsigned long long t;
    scanf("%llu",&t);
    while(t--)
    {
        scanf("%llu",&n);
        scanf("%llu",&m);
        scanf("%llu",&k);


        x=(n-k+1)%per;
        y=(m-k+1)%per;
        ans=(x*y)%per;
        printf("%llu\n",ans);
    }
}
