#include <iostream>
using namespace std;
int main()
{

    unsigned long long int n,k,i,maxp=0,t;
    ios_base::sync_with_stdio(0);
    cin>>t;
    while(t--)
    {
        maxp=0;
        cin>>n>>k;
        unsigned long long int a[n],b[n];
        for(i=0;i<n;i++)
            {
                cin>>a[i];
                a[i]=k/a[i];
            }
        for(i=0;i<n;i++)
            {
                cin>>b[i];
                b[i]=a[i]*b[i];
                if(maxp<b[i])
                    maxp=b[i];
            }
        cout<<maxp<<endl;
    }
}
