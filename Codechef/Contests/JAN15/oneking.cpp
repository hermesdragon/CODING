#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        cin>>n;
        int a[n],b[n],i;
        for(i=0;i<n;i++)
            cin>>a[i]>>b[i];
        int elements = sizeof(b) / sizeof(b[0]);
        sort(b,b+elements);
        for(i=0;i<n;i++)
            if(a[i]>b[i])
            ans++;
        cout<<ans<<"\n";
    }
}
