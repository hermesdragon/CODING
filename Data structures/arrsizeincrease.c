#include <stdio.h>
#include <stdlib.h>

int * increase(int pr[])
{
    int new[10],i;
    for(i=0;i<5;i++)
        new[i]=pr[i];
    pr=new;
}
void main()
{
    int *a;
    a=(int *)malloc(5*sizeof(int *));
    int i;

    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    increase(a);
   a[7]=10;
    printf("%d",a[7]);
}
