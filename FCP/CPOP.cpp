#include <bits/stdc++.h>
#define ll long long int
using namespace std;
long long int pr[1000000],nth[100000];
/*
 * Function to calculate modulus of x raised to the power y
 */
ll modular_pow(ll base, ll exponent, ll modulus=1000000007)
{
    ll result = 1;
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
  ios_base::sync_with_stdio(0);
    long long int i,j;
    for(i=0;i<1000000;i++)
        pr[i]=0;
    for(i=2;i<=1000;i++)
      if(pr[i]==0)
        for (j=i*i;j<=1000000;j+=i) 
          pr[j]=1;
    //cout<<pr[2]<<"\t"<<pr[4];
    i=j=0;
    for(i=2,j=1;j<=100000;i++)
        if(pr[i]==0)
        {
            nth[j]=i;
            j++;
        }
    long long int t,num;
    cin>>t;
    while(t--)
    {
        cin>>num;
        cout<<modular_pow(nth[num],nth[num])<<endl;
    }
    return 0;
}
