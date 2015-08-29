#include<iostream>
#include <math.h>
using namespace std;
bool isPrime (int num)
{
    if (num <=1)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        bool prime = true;
        int divisor = 3;
        double num_d = static_cast<double>(num);
        int upperLimit = static_cast<int>(sqrt(num_d) +1);

        while (divisor <= upperLimit)
        {
            if (num % divisor == 0)
                prime = false;
            divisor +=2;
        }
        return prime;
    }
}
int main()
{
    int t,n,x,y,z,x1,y1,z1,i;


    cin>>t;
    while(t--)
    {

        x1=y1=z1=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>x>>y>>z;
            x1+=x;
            y1+=y;
            z1+=z;

        }

        if(isPrime(x1) && isPrime(y1) && isPrime(z1))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

