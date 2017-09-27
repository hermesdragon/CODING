#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(0);

	int t,i,u,d;
	cin>>t;

	while(t--)
	{
		string s;
		cin>>s;
		u = 0;
		d = 0;
		for(i=0;i<s.size();i++)
		{
			if(s[i] == 'U')
			{
				while(s[i]=='U')
				{
					i++;
				}
				i--;
				u++;
			}
			else
			{
				while(s[i] == 'D')
				{
					i++;
				}
				d++;
				i--;
			}
		}
		cout<<min(u,d)<<"\n";
	}

	return 0;
}