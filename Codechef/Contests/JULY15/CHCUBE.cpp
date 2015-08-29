#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    string fr,ba,l,r,to,bo;
    while(t--)
    {
        cin>>fr>>ba>>l>>r>>to>>bo;
        if( (fr==to && to==r) || (r==to && to==ba) || (ba==to && to==l) || (l==to && to==fr) || (fr==bo && bo==r) || (r==bo && bo==ba) || (ba==bo && bo==l) || (l==bo && bo==fr ) )
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
