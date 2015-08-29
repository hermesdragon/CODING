#include <bits/stdc++.h>
using namespace std;
int gcd ( int a, int b )
{
  int c;
  while ( a != 0 ) {
     c = a;
     a = b%a;
     b = c;
  }
  return b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,i,ans=0;
        cin>>n>>q;   /// 3 3
              int a[n],ga[n],gb[n];
            for(i=0;i<n;i++)
                {
                    cin>>a[i]; ///     2 6 9
                }
            ga[0]=a[0];
            gb[n-1]=a[n-1];
            for(i=1;i<n;i++)
            {
                ga[i]=gcd(a[i],ga[i-1]);  /// 2 2 1
            }
            for(i=n-2;i>=0;i--)
            {
                gb[i]=gcd(a[i],gb[i+1]); /// 1 3 9
            }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            l=l-1;
            r=r-1;
            if(l==0)
                {
                    ans=gb[r+1];
                }
            else if(r==n-1)
            {
                ans=ga[l-1];
            }
            else
            {
                ans=gcd(ga[l-1],gb[r+1]);
            }

            cout<<ans<<endl;
        }

    }
    return 0;
}
