#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n,k,count,initial_n,i,power,num_factors;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        initial_n = k;
        num_factors = 1;
        for (i = 2; i * i <= initial_n; ++i)
        {
            power = 0;
            while (k % i == 0)
            {
                k = k / i;
                ++power;
            }
            num_factors = num_factors * (power + 1);
        }
        if (k > 1)
        num_factors = num_factors * 2;
        num_factors=n-num_factors;
        if(num_factors%2==0)
            cout<<"off\n";
        else
            cout<<"on\n";
    }
    return 0;
}
