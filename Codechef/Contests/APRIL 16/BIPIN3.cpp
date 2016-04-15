#include <bits/stdc++.h>
using namespace std;
// K*(K-1)^(N-1)
 //mmodular exponentiation code refrencef from http://www.sanfoundry.com/cpp-program-implement-modular-exponentiation-algorithm/
long long modular_pow(long long base, long long exponent, int modulus)
{
    long long result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}

int main()
{
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(0);

	long long t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		long long ans = modular_pow(k-1,n-1,1000000007);
		ans = (ans%1000000007)*(k%1000000007)%1000000007;
		cout<<ans<<"\n";
		
	}
	
	return 0;
}