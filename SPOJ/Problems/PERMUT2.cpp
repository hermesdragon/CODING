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

	int n=69;
	while(n!=0)
	{
		cin>>n;
		if(n==0)
			continue;
		int a[n],b[n];
		memset(b,0,sizeof(b));
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i] - 1] = i + 1;
		}
		if(equal(a,a+n,b))
			cout<<"ambiguous\n";
		else
			cout<<"not ambiguous\n";
	}
	return 0;
}