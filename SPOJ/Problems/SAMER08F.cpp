#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	#ifndef  ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif
    cin.tie(0);
	while(1)
	{
		long long n,ans=0,i;
		cin>>n;
		if(n==0)
			break;
		
		cout<<(n*(n+1)*(2*n+1))/6<<"\n";
	}
	return 0;
}
