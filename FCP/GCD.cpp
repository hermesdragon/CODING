#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a,long long int b)
{
    long long int t;
    while(a)
    {
        t = a;
        a = b%a;
        b = t;
    }
    return b;
}


int main()
{
    ios_base::sync_with_stdio(0);
    long long int m=1000000007;
    long int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long int a[n],k=0;
        long long int ans=1,ggd;
        int sq;
        for(i=0;i<n;i++)
            {
                cin>>a[i];
                ggd=gcd(a[i],i+1);
                //sq=sqrt(ggd);
                double d_sqrt = sqrt( ggd );
                int i_sqrt = d_sqrt;
                if ( (d_sqrt == i_sqrt) && (ggd!=1) )
                    k++;
            }
            //cout<<k<<endl;
            //cout<<endl;
        //for(i=0;i<n;i++)
          //  cout<<a[i]<<" ";
        sort(a,a+n);
        //for(i=0;i<n;i++)
          //  cout<<a[i]<<" ";
        //cout<<endl;
        for(i=n-1;i>=n-k;i--)
            ans = ( (ans%m) * (a[i]%m) )%m;
        cout<<ans<<endl;
    }
    return 0;
}
