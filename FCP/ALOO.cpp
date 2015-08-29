#include<bits/stdc++.h>
using namespace std;

#define rep1(i,n) for(int i = 1; i <= n ; i++)
#define rep0(i,n) for(int i = 0; i < n ; i++)
#define REP(i,a,b) for(int i = a ; i <= b; i++)
#define s(n) scanf("%d",&n)

#define MOD 1000000007
#define epsilon 0.000000000001
#define I_MAX 9223372036854775807
#define I_MIN -9223372036854775807

typedef long long ll;

int dp[1000000],ksum[1000000];
int main()
{
	ios_base::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	cin.tie(0);
    int n,k;
    cin>>n>>k;
    int a[n],i,ma=-9999999;
    rep0(i,n)
    {
        cin>>a[i];
    }
    dp[0]=0;
    rep0(i,k)
    {
        dp[0]+=a[i];
    }
    memset(ksum,0,sizeof(ksum));
    //ksum[0]=dp[0];
    rep0(i,n-k+1)
    {
        if(i==0)
            ksum[i]=dp[0];
        else
        ksum[i]=ksum[i-1]+a[i+k-1]-a[i-1];
    }
    //rep0(i,n-k+1)
   // cout<<ksum[i]<<" ";
   // cout<<"\n";
    REP(i,1,n-k)
    {
        dp[i]=max(dp[i-1]+a[i+k-1],ksum[i]);
    }
    rep0(i,n-k+1)
    {
        if(dp[i]>ma)
            ma=dp[i];
    }
    cout<<ma<<"\n";
	return 0;
}
