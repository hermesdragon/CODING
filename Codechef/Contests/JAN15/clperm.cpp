#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if((n*(n+1)/2)%2!=0)
            cout<<"Mom\n";
        else
            cout<<"Chef\n";
    }
    return 0;
}
