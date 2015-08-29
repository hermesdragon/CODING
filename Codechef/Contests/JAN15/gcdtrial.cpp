#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    int t;
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
    int t,n,q,i,ans=0,l,r;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n>>q;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        while(q--)
        {
            ans=0;
            cin>>l>>r;
            int ch=n-r+l-1;
            l=l-1;
            r=r-1;
            int b[ch],j=0;
            for(i=0;i<n;i++)
            {
                if(i>=l && i<=r)
                {
                }
                else
                {
                    b[j]=a[i];
                    j++;
                }
            }
            ans=b[0];
            for(i=0;i<ch;i++)
            {
                ans=gcd(ans,b[i]);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
