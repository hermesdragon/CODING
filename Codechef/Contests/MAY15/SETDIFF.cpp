#include<bits/stdc++.h>
using namespace std;
int compare (const void * a, const void * b)
{
    if( *( long long int*)a - *( long long int*)b < 0 )
        return -1;
    if( *( long long int*)a - *( long long int*)b > 0 )
        return 1;
    if( *( long long int*)a - *( long long int*)b == 0 )
        return 0;
}

long long int modular_pow(long long int base, long long int exponent,long long int modulus)
{
    long long int result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}
int main()
{
     long long int t,i,n,sum,m=1000000007;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        sum=0;
        for(i=0;i<n;i++)
            {
                cin>>a[i];
                a[i]=a[i]%m;
            }
        qsort(a, n, sizeof( long long int), compare);
        //long long int t1 = modular_pow(2,n-1,m);
        long long int t2=1,t3;
        for(i=0;i<n;i++)
            {
                sum = (sum%m + ((a[i]%m)*(t2%m))%m)%m;
                t2 = t2*2;
                t2 = t2%m;
            }
           t2=t2/2;
        for(i=0;i<n;i++)
        {
            sum = (sum%m - ((a[i]%m)*(t2%m))%m + m)%m;
            t2=t2/2;
        }
        cout<<sum%m<<endl;
    }
    return 0;
}




                //sum = (sum%m + ((a[i]%m)*(t2%m) + m)%m + m)%m;
                //t2=((t2%m)*(2%m) + m)%m;
                //sum = ((sum+m)%m + (((a[i]+m)%m)*((t2+m)%m)+m)%m - (((a[i]+m)%m)*((t1+m)%m)+m)%m +m)%m;
                //sum = (sum + ((a[i]%m)*((t2%m)-(t1%m))%m )%m +m)%m;
                //t3=(((t1%m)-(t2%m))%m + m)%m;
                //sum = ((sum%m)+((( (a[i]%m) - (a[n-i-1]%m + m)%m)%m)*(t3%m) )%m)%m;
                ///sum = (sum%m + ((a[i]%m) * ((t2%m - t1%m + m)%m))%m)%m; Satyam 1
                ///sum = (sum%m + (((a[i]%m)*( ((t2%m) - (t1%m))%m))%m)%m + m)%m; Satyam 2
                //t1=t1/2;
                //t2=t2*2;
                //t2=t2%m;

