#include<bits/stdc++.h>
using namespace std;
int maxnum(int a[])
{
    int maxi=0;
    int i;
    for(i=0;i<100001;i++)
        if(a[i]>maxi)
        maxi=a[i];
    return maxi;
}
int main()
{
    ios_base::sync_with_stdio(0);
    int t,n,ans,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[100001];
        for(i=0;i<100001;i++)
            b[i]=0;
        for(i=0;i<n;i++)
            {
                cin>>a[i];
                b[a[i]]++;
            }
        ans=n-maxnum(b);
        cout<<ans<<endl;
    }
}
