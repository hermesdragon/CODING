#include<stdio.h>
void main()
{
    int n,t,c,i,sum=0;

    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&c);
            sum+=c/3;
        }
        printf("%d\n",sum);
    }

}
