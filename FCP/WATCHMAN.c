#include <stdio.h>
void main()
{
    int t,n,shops[1000],i,j;
    long min,total;
    scanf("%d",&t);
    while(t--)
    {
        total=2147483640;

        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&shops[i]);
        for(i=0;i<n;i++)
        {   min=0;
            for(j=0;j<n;j++)
            {
                if(shops[j]>=shops[i])
                {
                    min+=shops[j]-shops[i];
                }
                else{
                    min+=shops[i]-shops[j];
                }

            }
            if(total>min)
                {total=min;

                }
        }
        printf("%d\n",total);
    }

}
