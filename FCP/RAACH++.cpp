#include <iostream>
using namespace std;

int main()
{
    unsigned long long m,n,k,per=1000000007,ans,x,y;
    unsigned long t;
    cin>>t;
    while(t--)
    {   ans=0;
        cin>>n>>m>>k;
        if(k<=m && k<=n)
        {
            x=(n-k+1)%per;
            y=(m-k+1)%per;
            ans=(x*y)%per;

        }
        cout<<ans<<"\n";
    }

    return 0;
}

