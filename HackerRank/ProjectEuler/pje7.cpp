#include<iostream>
#include<iomanip>
using namespace std;
bool isPrime(int n);

int main()
{
    int t;
    unsigned long long n,c=0,i,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        p=0;
        for(i=2;i<=10000000000;i++)
        {
            if(isPrime(i))
            {
                c++;
                p=i;
            }
            if(c==n)
                break;
        }
        cout<<p<<endl;
    }
	return 0;
}
bool isPrime(int n)
{
	for (int i = 2; i <=n/2; i++)
	{
		if (n % i == 0)
        {
			return false;
		}

	}
	return true;
}
