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

	float c=1.11;
	float a[300];
	a[0] = 0.00;
	a[1] = 0.50;
	for (int i = 2; i < 300; ++i)
	{
		a[i] = a[i-1] + (1/(float)(i+1));
		//cout<<a[i]<"\n";
	}
	while(c!=0.00)
	{
		cin>>c;
		if(c == 0.00)
			break;
		for (int i = 0; i < 300; ++i)
		{
			if(a[i]>=c)
			{
				cout<<i<<" card(s)\n";
				break;
			}
		}

	}

	
	return 0;
}