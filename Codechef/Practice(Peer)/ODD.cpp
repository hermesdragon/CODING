#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    unsigned long long t,n,a[29];
    for(int i=0;i<29;i++)
    a[i]=pow(2,i+1);
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<a[(int)log2(n)-1]<<endl;
    }
    return 0;

}
