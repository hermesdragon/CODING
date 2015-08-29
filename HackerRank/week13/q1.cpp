#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        long long int b,t,w,z,x,y,i,j,c=0,a[3];
        cin>>b>>w;
        cin>>x>>y>>z;
        a[0]=b*x+w*y;
        a[1]=((b+w)*y + b*z);
        a[2]=((b+w)*x + w*z);
        for(i=0;i<2;i++)
            for(j=i+1;j<3;j++)
            if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        cout<<a[0]<<endl;
    }
}
