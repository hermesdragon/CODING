#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long t,n,sosq,sqos,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sosq=0;
        sqos=0;
        sqos=pow((n*(n+1)/2),2);
        for(i=1;i<=n;i++)
            sosq+=pow(i,2);
        cout<<sqos-sosq<<endl;
    }
    return 0;
}
