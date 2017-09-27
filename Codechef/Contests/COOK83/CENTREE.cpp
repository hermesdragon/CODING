#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
 
	ios_base::sync_with_stdio(0);
 
	int t,n,b;
	cin>>t;
 
	while(t--)
	{
		cin>>n>>b;
 
		if((n == 2 && b == 0))
			cout<<"NO\n";
		else if(b==0)
		{
			cout<<"YES\n";
			for (int i = 2; i <= n; ++i)
			{
				cout<<1<<" "<<i<<"\n";
			}
		}
		else if(n==2 && b==1)
			cout<<"YES\n1 2\n";
		else if(4*b <= n)
		{
			cout<<"YES\n";
			int mid = b+1;
			int roid = 2*b + 1;
			for(int i = 1;i<roid;i++)
				cout<<i<<" "<<i+1<<"\n";
			for(int i = roid+1;i<=n;i++)
				cout<<i<<" "<<roid<<"\n";
		}
		else
		{
			cout<<"NO\n";
		}
 
	}
 
	return 0;
} 