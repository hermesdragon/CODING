#include <stdio.h>
#include <math.h>
void main()
{
    int t;
    unsigned long long a,b,c,d,pa,pw;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu %llu %llu %llu",&a,&b,&c,&d);
        pa=log2(a)*b;
        pw=log2(c)*d;
        if(pw>=pa)
        {
            printf("Warrior\n");

        }
        else{
            printf("Alien\n");
        }
    }
}
