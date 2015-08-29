#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    long long int m=1000000007,i=2,ans;
    int t,n;
    cin>>t;
    while(t--)
    {
        ans=1;
        cin>>n;
        for(i=2;i<=n;i++)
        {
            ans = ( ( ans%m )%m*(n%m + i%m)%m )%m;
        }
        cout<<ans<<endl;
    }
    return 0;
}
