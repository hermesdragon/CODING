#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],ans;
    cin>>a[0];
    ans=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        ans=a[i]^ans;
    }
    cout<<ans;
    return 0;
}
