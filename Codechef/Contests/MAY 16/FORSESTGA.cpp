#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	
	ll n,w,i,l;
	cin>>n>>w>>l;
	ll a[n],b[n];
	ll sum = 0;
	i=0;
	while(i<n)
	{
		cin>>a[i]>>b[i];
		if(a[i]>=l)
            sum+=a[i];
		i++;
	}
        
	ll up = 9223372036854775807;
	ll low = 0;
	ll mid = (up+low)/2;
	if(sum>=w)
		cout<<"0\n";
	else
	{
	while(low!=up-1)
	{
		sum = 0;
		for(i=0;i<n;i++)
		{
			if( (a[i] + mid*b[i]>=l) && sum<w )
 			sum+=a[i] + mid*b[i];
		}
		if(sum>=w)
		{
			up = mid;
			mid = (up+low)/2;
		}
		else
		{
			low = mid;
			mid = (up+low)/2;
		}
	}
	cout<<mid + 1<<"\n";
}
	
	return 0;
}