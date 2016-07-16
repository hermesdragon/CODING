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
	ll i;
	int dp[5002];
	string s;
	
	while(true)
	{
		cin>>s;
		if(s.size() == 1 && s[0] == '0')
			return 0;
		int len = s.size();
		memset(dp,0,sizeof(dp));
		dp[0]=1;
		for(i=0;i<len;i++)
		{
			if(s[i] == '0')
				continue;
			dp[i+1] += dp[i];
			if((i==len-1)||(s[i]>'2'))
				continue;
			if((s[i]=='2')&&(s[i+1]>'6'))
				continue;
			dp[i+2] +=dp[i];
		}
		cout<<dp[len]<<"\n";
	}
	
	return 0;
}