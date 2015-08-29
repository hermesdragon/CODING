#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,q;
    cin>>t;
    unsigned long long int m,n,k,a,b,per=1000000007,ans;
    while(t--)
    {
        cin>>m>>n;
        cin>>q;
        while(q--)
        {
            cin>>k;
            if(k>max(m,n))
                k=max(m,n);
            a=m/k;
            b=n/k;
            if(k<=m || k<=n)
            {
                if(m%k!=0)
                    a+=1;
                if(n%k!=0)
                    b+=1;
            }
            ans=((a%per)*(b%per))%per;
            cout<<ans<<endl;
        }
    }
    return 0;
}
