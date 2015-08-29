#include<bits/stdc++.h>
using namespace std;

#define rep1(i,n) for(int i = 1; i <= n ; i++)
#define rep0(i,n) for(int i = 0; i < n ; i++)
#define REP(i,a,b) for(int i = a ; i <= b; i++)
#define s(n) scanf("%d",&n)
typedef long long ll;

ll maxsubarrsum(int size,ll a[])
{
	int i;
	ll max_so_far=a[0];
	ll max_curr=a[0];
	REP(i,1,size-1)
	{
		max_curr=max(a[i],max_curr+a[i]);
		max_so_far=max(max_curr,max_so_far);
	}
	return max_so_far;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t,n,i;
	cin>>t;
	while(t--)
	{
		s(n);
		ll a[n];
		rep0(i,n)
		cin>>a[i];
		cout<<maxsubarrsum(n,a)<<"\n";
	}
	return 0;
}
