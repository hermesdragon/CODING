#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	long long int t,u,v;
	cin>>t;
	while(t--) {
	    cin>>u>>v;
	    cout<<((u+v)*(u+v+1)/2) + u + 1<<"\n";
	}
	return 0;
}
