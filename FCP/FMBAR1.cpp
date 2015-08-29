#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    string a,b;
    long long int per=1000000007,A=0,B=0,ans,i;
    while(t--)
    {
        cin>>a>>b;
        A=0;
        B=0;
        for(i=0;i<a.size();i++)
            A = ((10*A) + (a[i]-'0'))%per;
        for(i=0;i<b.size();i++)
            B = ((10*B) + (b[i]-'0'))%per;
        ans = ( (A%per) * (B%per) )%per;
        cout<<ans<<endl;
    }
    return 0;
}
