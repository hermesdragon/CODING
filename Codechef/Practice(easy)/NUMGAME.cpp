#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n&1)
            cout<<"BOB\n";
        else
            cout<<"ALICE\n";
    }
    return 0;
}
