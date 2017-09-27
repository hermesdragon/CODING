#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(0);
	long long int t,a,b,n;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>n;
		if(n%2==0)
			cout<<max(a,b)/min(a,b)<<"\n";
		else
			cout<<max(a*2,b)/min(a*2,b)<<"\n";
	}
	return 0;
}