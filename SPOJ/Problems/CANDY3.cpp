#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(0);
	long long int n,t,i,a,s=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		s=0;
		for(i=0;i<n;i++)
		{
			cin>>a;
			s=((a%n) + (s%n))%n;
		}
		if(s%n==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	
	return 0;
}