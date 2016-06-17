#include <bits/stdc++.h>
using namespace std;
long long int a[1000000];
long long int tax(long long int n)
{

    if(n < 1000000)
    	if(a[n]!=0)
            return a[n];

    if(n < n/4 + n/3 + n/2)
    {
        return tax(n/2) + tax(n/4) + tax(n/3);
    }
    else
    {
        if(n < 1000000)
            a[n] = n;
        return n;
    }
}
int main()
{
    long long n;
    for(int i=0;i<1000000;i++) 
    	a[i]=tax(i);
    while(cin>>n)
    {
        cout<<tax(n)<<endl;
    }
    return 0;
}
