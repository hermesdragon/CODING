#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	#ifndef  ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif
    cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		if(x!=y && x!=y+2)
			cout<<"No Number\n";
		else
		{
			if(x&1)
				cout<<x+y-1<<"\n";
			else
				cout<<x+y<<"\n";
		}
	}
	return 0;
}