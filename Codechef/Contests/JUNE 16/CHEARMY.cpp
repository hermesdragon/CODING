#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

int main()
{
	
	#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(0);

	int t;
	ll k,ans,c,mul;
	cin>>t;
	while(t--)
	{
		ans = 0;
		cin>>k;
		k--;
		ans = k%5; 
		ans*=2;
		k = k/5;
		c = 10;
		while(k!=0)
		{
			
			ans += (k%5)*c*2;
			//cout<<(k%5)*c*2<<"\t"<<ans<<"\n";
			k = k/5;
			c = c*10;
		}
		cout<<ans<<"\n";
	}
	return 0;
}