#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	
	#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(0);

	int n,q,t;
	cin>>n>>q;
	int a[n];
	int max = 0 ;
	int min = 1000000000;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>=max)
			max = a[i];
		if(a[i]<=min)
			min = a[i];
	}
	while(q--)
	{
		cin>>t;
		if(n == 1)
		{
			if(t==a[0])
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
		else
		{
			if(t >=min && t<=max)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
	}
	
	return 0;
}