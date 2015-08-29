#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        long int l,b,h,a,ans=0;
        cin>>l>>b>>h>>a;
        ans=(l/a)*(b/a)*(h/a);
        cout<<ans<<endl;
    }
    return 0;
}
