#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long int a[n],i,ans=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            ans+=a[i];
            if(ans%k==0)
                continue;
            else
            ans+=1;
        }
        if(ans%k==0)
        ans=(ans/k);
        else
            ans=(ans/k)+ 1;
        cout<<ans<<endl;
    }

    return 0;
}
