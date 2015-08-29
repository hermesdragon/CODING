#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	int t,a=0,b=0,l=0,w=0,s,d;
	cin>>t;
	while(t--)
	{
		cin>>s>>d;
		a+=s;
		b+=d;
		if((a-b)>l)
		{
			l=a-b;
			w=1;
		}
		else if((b-a)>l)
		{
			l=b-a;
			w=2;
		}
	}
	cout<<w<<" "<<l;
	return 0;
}
