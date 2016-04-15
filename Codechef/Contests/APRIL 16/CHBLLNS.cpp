#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(0);

	long long int t,k;
	cin>>t;
	while(t--)
	{
		long long int a[3];
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		cin>>k;
		long long int sum=0;
		for (int i = 0; i < 3; i++)
		{
			if(k<=a[i])
			{
				sum+=(k-1)*(3-i) + 1;
				break;
			}
			else
			sum+=a[i];
		}
		cout<<sum<<"\n";
	}
	
	return 0;
}