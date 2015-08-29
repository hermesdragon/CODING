#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(!n) break;
        int i,a[n],temp=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            if(a[a[i]-1]==i+1)
                continue;
            else
            {
                temp=1;
                break;
            }
        if(temp==0)
            cout<<"ambiguous\n";
        else
            cout<<"not ambiguous\n";
    }
}
