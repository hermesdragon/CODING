#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,x,a[200],i,j,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a[0]=1;
        m=0;
        temp=0;
        for(i=2;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                x=a[j]*i+temp;
                a[j]=x%10;
                temp= x /10;

            }
            while(temp!=0)
            {
                a[m+1] = temp % 10;
                temp = temp/10;
                m++;
            }

        }

        for(i=m
            ;i>=0;i--)
            cout<<a[i];
        cout<<endl;
    }
}
