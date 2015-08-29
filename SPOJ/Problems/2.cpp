#include <iostream>
using namespace std;
int isprime(unsigned long long n )
{
    int i;
    for(i=3;i<=n/2;i=i+2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    unsigned long long t,n,m,i;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        if(m%2==0 && m!=2)
        {for(i=m+1;i<=n;i=i+2)
            if(isprime(i)==1)
                cout<<i<<endl;
        }
        else if(m%2!=0 && m>2)
            {
                for(i=m;i<=n;i=i+2)
            if(isprime(i)==1)
                cout<<i<<endl;
            }
        else if(m==1)
        {
            cout<<"2"<<endl;
            for(i=3;i<=n;i=i+2)
            if(isprime(i)==1)
                cout<<i<<endl;
        }
        else if(m==2)
        {
            cout<<"2"<<endl;
            for(i=3;i<=n;i=i+2)
            if(isprime(i)==1)
                cout<<i<<endl;
        }


        cout<<endl;
    }

}
