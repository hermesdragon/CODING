#include <bits/stdc++.h>
using namespace std;

int main()	
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(0);

	long long int t,n,pos,ans,cnt,two,i,newsum,ans2;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int a[n],sum[n];
		pos = 0;
		ans = 0;
		cnt = 0;
		two = 0;
		newsum = 0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i] < 0)
				ans = ans + a[i];
			else
			{
				cnt++;
				pos = pos + a[i];
			}
		}
		ans = ans + pos*cnt;

		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			two = two + a[i];
			sum[i] = two;
		}
		two = 0;
		ans2 = sum[n-1];
		for(i=n-1;i>=0;i--)
		{	
			newsum = newsum + a[i];
			if(i>0)
				two = (sum[i-1]) + (newsum*(n-i));
			else
				two = newsum*(n);
			if(two > ans2)
				ans2 = two;
		}
		//cout<<ans<<"\n";
		cout<<max(ans,ans2)<<"\n";
	}
	return 0;
}
