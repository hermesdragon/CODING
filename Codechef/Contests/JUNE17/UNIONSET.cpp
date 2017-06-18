#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(0);

	int t,n,k,num,len,i,j,clit,ans;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;

		int map[n][k];
		memset(map, 0, sizeof(map[0][0]) * n * k);
		for(i=0;i<n;i++)
		{
			cin>>len;
			for(j=0;j<len;j++)
			{
				cin>>num;
				map[i][num-1] = 1;
			}

		}
		ans = 0;
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				ans++;
				for(clit=0;clit<k;clit++)
				{
					if(map[i][clit] == 0 && map[j][clit] == 0)
					{
						ans--;
						break;
					}

				}
			}
		}
		if(n==1)
			cout<<0<<"\n";
		else
			cout<<ans<<"\n";
	}
	return 0;
}