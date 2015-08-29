#include<stdio.h>
#include<math.h>

long long int gcd(long long int a, long long int b)
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}

int main()
{
    long long int a,b,t,prod=1,grub,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        a=gcd(a,b);
        b=b/a;
        prod=sqrt(b);
        grub=0;
        if(b%2==0 && a%2!=0)
        {
            printf("No\n");
            continue;
        }
        while (b%2 == 0)
        {
            b = b/2;
        }
        for (i = 3; i <= prod; i = i+2)
        {
            if(b%i==0 && a%i!=0)
            {
                grub=1;
                break;
            }
            while (b%i == 0)
            {
                b = b/i;
            }
        }
        if(grub==1)
        {
            printf("No\n");
            continue;
        }
        if(b>2){
            if(a%b!=0)
                printf("No\n");
            else
                printf("Yes\n");
            }
        else
        printf("Yes\n");

    }
    return 0;
}
