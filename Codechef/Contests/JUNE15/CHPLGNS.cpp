#include<bits/stdc++.h>
using namespace std;

struct xaxis
{
    int xmax,ind;
};
int comparator(const void *p, const void *q)
{
    int l = ((struct xaxis *)p)->xmax;
    int r = ((struct xaxis *)q)->xmax;
    return (l - r);
}
int main()
{
    int t,n,m,x,y,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        xaxis a[n];
        int b[n];
        memset(b,0,sizeof(b));
        for(i=0;i<n;i++)
        {
            cin>>m;
            a[i].xmax=-1000000;
            a[i].ind=i;
            while(m--)
            {
                cin>>x>>y;
                if(x>a[i].xmax)
                    a[i].xmax=x;
            }
        }
        int size = n;
        qsort((void*)a, size, sizeof(a[0]), comparator);
        for(i=0;i<n;i++)
            b[a[i].ind]=i;
        for(i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}
///need only one parameter...like only use minimum x-axis
