#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    long long int n,k,t,c=0,i;
    scanf("%lld %lld",&n,&k);
    while(n--)
    {
        scanf("%lld",&t);
        if(t%k==0)
        {
            c++;

        }
    }
    printf("%lld",c);
    return 0;
}
//char *s;
//s=(char *)malloc(sizeof(char)*100);
