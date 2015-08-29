#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            ans+=a[i]/(i+1);
        }
        if(ans&1)
            cout<<"ALICE\n";
        else
            cout<<"BOB\n";
    }
    return 0;
}
