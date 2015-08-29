#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a,f,tw,p,b;
    cin>>n;
    while(n--)
    {
        cin>>a;
        b=a;
        tw=0;
        f=0;
        while(a%2==0)
        {
            tw++;
            a=a/2;
        }
        while(a%5==0)
        {
            f++;
            a=a/5;
        }
        a=b;
        if(f>tw)
        {
            p=f-tw;
            if((f-tw)%2!=0)
            {
                p=p + 1;

            }
            a=a*pow(4,p/2);
        }

        cout<<a<<endl;

    }
    return 0;
}
