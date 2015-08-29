#include<bits/stdc++.h>
using namespace std;

#define rep1(i,n) for(int i = 1; i <= n ; i++)
#define rep0(i,n) for(int i = 0; i < n ; i++)
#define REP(i,a,b) for(int i = a ; i <= b; i++)
#define s(n) scanf("%d",&n)
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	long long int a,b,n,ans;
	int i;
	cin>>a>>b>>n;
	REP(i,3,n)
	{
		ans=b*b + a;
		a=b;
		b=ans;
	}
	cout<<ans<<"\n";
	return 0;
}
