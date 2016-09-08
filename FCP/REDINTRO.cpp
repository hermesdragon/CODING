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

	ll x,a1,a2;
	cin>>x>>a1>>a2;
	if(x<a2)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	
	return 0;
}