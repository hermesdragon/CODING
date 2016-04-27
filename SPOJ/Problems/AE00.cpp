#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int n,i,j,ans=0;
	cin>>n;
	if(n==1)
		{
			cout<<"1\n";
		}
	else
	{
		for(i=1;i<=(n/2) + 1;i++)
			for(j=i; j<=n ;j++)
				if(i*j<=n)
					ans++;
				else
					break;
		cout<<ans<<"\n";
	}
	return 0;
}