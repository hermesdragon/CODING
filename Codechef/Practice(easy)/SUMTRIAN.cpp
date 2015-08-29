#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int first[n][n],i,j,temp;
		for(i=0;i<n;i++)
			for(j=0;j<=i;j++)
				cin>>first[i][j];
		for(i=n-2;i>=0;i--)
			for(j=i;j>=0;j--)
				 {
				     first[i][j]+=max(first[i+1][j],first[i+1][j+1]);
				 }
		cout<<first[0][0]<<endl;
	}
	return 0;
}
