#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    unsigned long long int t,s,c,k,ans;
    cin>>t;
    while(t--)
    {
        cin>>s>>c>>k;
        if(c==0)
        {
            if(s>=k)
            {
                ans=pow(2,(s-k+1))+1;
                cout<<ans<<endl;
            }
            else
            {
                cout<<"0\n";
            }
        }
        else if(k==1)
        {
            if(s>c)
            {
                ans=pow(2,s)+1;
                cout<<ans<<endl;
            }
            else if(s==0)
            {
                ans=0;
                for(int i=1;i<=c;i++)
                    ans+=pow(2,i);
                cout<<ans<<endl;
            }
            else
            {
                ans=0;
                for(int i=s;i<=c;i++)
                    ans+=pow(2,i);
                ans+=pow(2,s) +1;
                cout<<ans<<endl;
            }
        }
        else
        {
            if(c>=s)
                c=s-1;

        }
    }
    return 0;
}
