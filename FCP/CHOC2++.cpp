#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n,t,i;
    unsigned long long a_i,k,per=1000000009,ans=0;
    cin>>t;
    while(t--)
    {   ans=0;
        a_i=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>a_i;
            ans+=(a_i%k)%per;

        }
        ans=ans%per;
        cout<<ans<<endl;

    }
    return 0;
}
