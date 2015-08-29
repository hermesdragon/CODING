#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        char c[100];
        int i,ans=0;
        cin>>c;
        for(i=0;i<strlen(c);i++)
        {
            if(c[i]=='A' || c[i]=='D' || c[i]=='O' || c[i]=='P' || c[i]=='Q' || c[i]=='R')
                ans+=1;
            else if(c[i]=='B')
                ans+=2;
        }
        cout<<ans<<endl;
    }
}
