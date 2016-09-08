#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(0);

	ll t,n,ans;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ans = (n)*(n+1)*(n+2);
		ans = ans/6;
		if(n&1)
			ans += ((n - 1)*(n+1)*((2*n)  + 3))/24;
		else
			ans += ((n)*(n+2)*((2*n)  - 1))/24;
		cout<<ans<<"\n";
	}
	
	return 0;
}