#include<stdio.h>
void main()
{
int n,t,val,i,minion;
scanf("%d",&n);
scanf("%d",&t);
while(t--)
    {
        scanf("%d",&val);
        minion=n-val;
        if(minion!=0)
        for(i=0;i<minion;i++)
            printf("%d\n",val);
        else
            printf("-1\n");

    }
}
