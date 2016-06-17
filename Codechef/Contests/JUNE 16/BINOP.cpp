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

	int t,n,az,ao,bz,bo,cz,iz,co,io,i,ans;
	string a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		az=0;
		ao=0;
		bz=0;
		bo=0;
		ans=0;
		cz=0;
		iz=0;
		co=0;
		io=0;
		n = a.size();
		for(i=0;i<n;i++)
		{
			if(a[i] == '0')
				az++;
			else
				ao++;
			if(b[i] == '0')
				bz++;
			else
				bo++;
		}
		if((az==0 && bz>0) || (ao==0 && bo>0))
		{
			cout<<"Unlucky Chef\n";
		}
		else if(ao == bo)
		{
			for(i=0;i<n;i++)
				if(a[i]!=b[i])
					ans++;
			ans/=2;
			cout<<"Lucky Chef\n";
			cout<<ans<<"\n";
		}
		else if(az < bz)
		{
			for(i=0;i<n;i++)
			{
				if(a[i] == '0')
				{
					if(b[i] == '0')
						cz++;
					else
						iz++;
				}
			}
			ans = (bz-az) + iz;
			cout<<"Lucky Chef\n";
			cout<<ans<<"\n";
		}
		else
		{
			for(i=0;i<n;i++)
			{
				if(a[i] == '1')
				{
					if(b[i] == '1')
						co++;
					else
						io++;
				}
			}
			ans = (bo-ao) + io;
			cout<<"Lucky Chef\n";
			cout<<ans<<"\n";
		}
	}
	return 0;
}