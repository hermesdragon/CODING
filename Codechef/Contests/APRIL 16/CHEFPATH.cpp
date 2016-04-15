#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(0);

	long long t,n,m;
	cin>>t;

	while(t--)
	{
		cin>>n>>m;
		if(m==1 && n==1)
		{
			cout<<"No\n";
		}
		else if (m<=2 && n==1)
		{
			cout<<"Yes\n";
		}
		else if(m==1 && n<=2)
		{
			cout<<"Yes\n";
		}
		else if(n%2==0 && m>=2)
		{
			cout<<"Yes\n";
		}
		else if(m%2==0 && n>=2)
		{
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
	}
	
	return 0;
}