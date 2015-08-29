#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n+1],b[m],i,j,c[n-m];
        for(i=0;i<=n;i++)
        {
            a[i]=0;
        }
        a[0]=1;
        int csize,ass_size;
        if((n-m)%2==0)
        {
            csize=(n-m)/2;
            ass_size=csize;
        }
        else
        {
            csize=(n-m)/2+1;
            ass_size=csize-1;
        }
        int chef[csize],ass[ass_size];
        for(i=0;i<m;i++)
            {
                cin>>b[i];
                a[b[i]]=1;
            }
        for(i=0,j=0;i<=n;i++)
        {
            if(a[i]==0)
            {
                c[j]=i;
                j++;
            }
        }
        sort(c,c+n-m);
        int k;
        for(i=0,j=0,k=0;i<n-m;i++)
        {
            if(i%2==0)
            {
                chef[k]=c[i];
                k++;
            }
            else
            {
                ass[j]=c[i];
                j++;
            }
        }
        for(i=0;i<csize;i++)
            cout<<chef[i]<<" ";
        cout<<endl;
        for(i=0;i<ass_size;i++)
            cout<<ass[i]<<" ";
        cout<<endl;
    }
    return 0;
}
