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
	long long int t,k;
	cin>>t;
	while(t--)
	{
		cin>>k;
		k--;
		if(k%4 == 0)
			cout<<((k/4)*1000 + 192)<<"\n";
		else if(k%4 == 1)
			cout<<((k/4)*1000 + 442)<<"\n";
		else if(k%4 == 2)
			cout<<((k/4)*1000 + 692)<<"\n";
		else
			cout<<((k/4)*1000 + 942)<<"\n";
	}
	
	return 0;
}