#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long int t,n,i,maxpo,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        maxpo=sum=0;
        maxpo=(int)(log(n)/log(5));
        for(i=1;i<=maxpo;i++)
            sum+=n/pow(5,i);
        cout<<sum<<endl;
    }
}
