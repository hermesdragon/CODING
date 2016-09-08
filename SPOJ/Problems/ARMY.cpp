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

	ll t,ng,nm,a,mg,mm;
	cin>>t;
	while(t--)
	{
		cin>>ng>>nm;
		mg=mm=0;
		for(int i=0;i<ng;i++)
		{
			cin>>a;
			if(mg<a)
				mg=a;
		}
		for(int i=0;i<nm;i++)
		{
			cin>>a;
			if(mm<a)
				mm=a;
		}
		if(mm>mg)
			cout<<"MechaGodzilla\n";
		else
			cout<<"Godzilla\n";
	}
	
	return 0;
}