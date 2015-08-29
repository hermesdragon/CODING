#include<iostream>
using namespace std;
int main()
{
    unsigned long long t,l,r,ans,prod,i=0,rem;
    cin>>t;
    while(t--)
    {
        prod=1;
        ans=1;
        cin>>l>>r;


        if((r-l)>=4)
        {
            ans=0;

        }
        else
        {
            for(i=l;i<=r;i++)
                prod=prod*i;
            while(prod>0)
            {
                rem=prod%10;
                prod=prod/10;
                ans*=rem;
            }

        }
        cout<<ans<<endl;

    }

    return 0;
}
