#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}

int main()
{
    ios_base::sync_with_stdio(0);
    long long int a,b,t,prod=1,flag,i,sq;
    int grub=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(gcd(a,b)==1 && a%b!=0)
            cout<<"No\n";
        else
        while(1)
        {
            if(gcd(a,b)==1 && a%b!=0)
                {
                    cout<<"No\n";
                    break;
                }
            else if(gcd(a,b)==1 && a%b==0)
            {
                cout<<"Yes\n";
                break;
            }
                a=gcd(a,b);
                b=b/a;
        }

    }
    return 0;
}
