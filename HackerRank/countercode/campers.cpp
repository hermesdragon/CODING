#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,k,ele,co=0,tmp,i;
    cin>>n>>k;
    co=k;
    long long int a[n+2];
    for(i=0;i<n+2;i++)
        a[i]=0;
    a[0]=1;
    a[n+1]=1;
    while(k--)
    {
        cin>>ele;
        a[ele]=1;
        a[ele+1]=1;
        a[ele-1]=1;
    }
    for(i=1;i<=n;i++)
        {
            tmp=0;
            while(a[i]==0)
            {
                tmp++;
                i++;
            }
            //cout<<tmp<<" "<<i<<"\n";
            if(tmp%2!=0)
                co+= tmp/2 + 1;
            else
                co+=tmp/2;
        }
    cout<<co<<"\n";
    return 0;
}

/// 0001110011100000

