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

	ll n;
	cin>>n;
	if((n<=1) || (n&(n-1)))
		cout<<"NIE\n";
	else
		cout<<"TAK\n";
	
	return 0;
}