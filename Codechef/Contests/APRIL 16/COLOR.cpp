#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char a[n];
        cin>>a;
        int b[3];
        b[0]=0;
        b[1]=0;
        b[2]=0;
        for(i=0;i<n;i++)
        {
            if(a[i]=='R')
                b[0]++;
            else if(a[i]=='G')
                b[1]++;
            else
                b[2]++;
        }
        int max=0;
        for(i=0;i<3;i++)
        {
            if(max<b[i])
                max=b[i];
        }
        cout<<n-max<<"\n";
    }
    return 0;
}
