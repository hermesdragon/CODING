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

	ll t,n,s,i,tt;
	cin>>t;
	tt=t;
	while(t--)
	{
		cin>>n>>s;
		vector<int> a;
		int sum=0,num;
		for(i = 0;i<s;i++)
			{	
				cin>>num;
				a.push_back(num);
			}
		sort(a.rbegin(),a.rend());
		for(i=0;i<s;i++)
		{
			sum+=a[i];
			if(sum>=n)
			{
				cout<<"Scenario #"<<tt-t<<":\n";
				cout<<i+1<<"\n";
				break;
			}
		}
		if(sum<n)
		{
			cout<<"Scenario #"<<tt-t<<":\n";
			cout<<"impossible"<<"\n";
		}
		cout<<"\n";
	}
	
	return 0;
}