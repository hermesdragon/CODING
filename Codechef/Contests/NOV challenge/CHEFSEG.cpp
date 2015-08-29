#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    unsigned long long x,k,t;
    cin>>t;
    while(t--)
    {
        cin>>x>>k;
        cout<<fixed<<setprecision(6)<<(x*(1+2*(k-pow(2,(int)log2(k)))))/pow(2,(int)log2(k)+1)<<endl;
    }

return 0;
}
