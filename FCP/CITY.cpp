#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    int t;
    cin>>t;
    while(t--)
    {
        float ans=0.5;
        long long int l,i;
        cin>>l;
        long long int a[l];
        for(i=0;i<l;i++)
            cin>>a[i];
        for(i=0;i<l;i++)
        {
            ans = ans*2 - a[i];
        }

        if(ans==0)
            cout<<"Yo\n";
        else
            cout<<"Nope\n";
    }
    return 0;
}
