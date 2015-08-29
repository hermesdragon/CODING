#include <stdio.h>
long long int sumOfDivisors(long long int n)
{
    long long int prod=1,k;
    for(k=2;k*k<=n;k++){
        long long int p=1;
        while(n%k==0){
            p=p*k+1;
            n/=k;
        }
        prod*=p;
    }
    if(n>1)
        prod*=1+n;
    return prod;
}
int main( int argc, char *argv[] ) {
    long long int n,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf( "%lld\n",sumOfDivisors( n ) );
    }

    return 0;
}
