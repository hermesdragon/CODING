#include <bits/stdc++.h>
using namespace std;
int main()
{
    float t;
    ios_base::sync_with_stdio(0);
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        float a[n],sum=0,np=0;
        for(int i=0;i<n;i++)
            {
                cin>>a[i];
                sum+=a[i];
                if(a[i]>0)
                    np++;
            }

            if(sum>=100 && (sum-100)<np)
                cout<<"YES\n";
            else if(sum<100)
                cout<<"NO\n";
            else
            {
                cout<<"NO\n";
            }
    }
}
