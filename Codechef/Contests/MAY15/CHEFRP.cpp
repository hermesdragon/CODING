#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,small,a,total,flag;
    cin>>t;
    while(t--)
    {
        cin>>n;
        small=10000;
        flag=0;
        total=0;
        while(n--)
        {
            cin>>a;
            if(a<small)
                small=a;
            if(a<2)
                flag=1;
            total+=a;
        }
        if(flag==1)
            cout<<"-1\n";
        else
            cout<<total-small+2<<endl;
    }
    return 0;
}
