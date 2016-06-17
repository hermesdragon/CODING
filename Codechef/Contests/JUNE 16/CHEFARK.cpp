#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//static long long int arr[4001][4001],n=4001,
ll p = 1000000007,m  = 1000000007;
long long powmod (long long a, long long b, long long m) {
	long long res = 1;
	while (b > 0)
		if (b & 1) {
			res = (res * a) % m;
			--b;
		}
		else {
			a = (a * a) % m;
			b >>= 1;
		}
	return res % m;
}
 
int result[100005] = {0};
 
void fact_dp(int n)
{
    if (n >= 0) 
    {
        result[0] = 1;
        for (int i = 1; i <= n; ++i) 
        {
            result[i] = ((i%m) * (result[i - 1]%m))%m;
        }
    }
}

ll inv[100005] = {0};
void ifact_dp(int n)
{
    if (n >= 0) 
    {
        inv[0] = 1;
        for (int i = 1; i <= n; ++i) 
        {
            inv[i] = powmod(result[i],m-2,m);
        }
    }
}
int main()
{
	
	#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(0);
 
	//Pascal();
	ll val,val1;
	ll val2;
	fact_dp(100004);
	ifact_dp(100004);
	ll ans;
	int t;
	cin>>t;
	
	//cout<<inv[100000]<<"\t"<<result[100000]<<"\n";
	
	while(t--)
	{
		int n,k;
		ans = 0;
		cin>>n>>k;
		int a[n],count=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			if(a[i]==0)
				count++;
		}
		n-=count;
		val1 = result[n];
		if(count>0)
		{
			if(k>=n)
				ans = powmod(2,n,p);
			else
			for(int i = k;i>=0;i--)
				{					
					val2 = (inv[i]*inv[n-i])%m;	
					val = (val1*val2)%m;
					//cout<<ans<<"\t"<<val<<"\t"<<val1<<"\t"<<val2<<"\n";
					ans = (ll)((ans%p) + ((ll)val%p))%p;
				}
			cout<<ans%p<<"\n";
		}
		else
		{
			if(k>=n)
				ans = powmod(2,n-1,p);
			else
			for(int i = k;i>=0;i=i-2)
				{
					
					val2 = (inv[i]*inv[n-i])%m;
					val = (val1*val2)%m;
					//cout<<ans<<"\t"<<val<<"\t"<<val1<<"\t"<<val2<<"\n";
					ans = (ll)((ans%p) + ((ll)val%p))%p;
				}
			cout<<ans%p<<"\n";
		}
	}
	return 0;
}