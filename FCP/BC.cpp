#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    unsigned long long int t,n,coun;
    cin>>t;
    while(t--)
    {
        coun=0;
        cin>>n;
         while(n)
         {
            coun += n & 1;
            n >>= 1;
         }
    cout<<coun<<endl;
    }
    return 0;
}
