#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m,pb,dirt,ind,origlen,tmp,i,j,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		tmp=m;
		int a[n];
		for(i=0;i<n;i++)
			a[i]=0;
		i=0;
		j=n-1;
		while(tmp--)
		{
			a[i]++;
			a[j]++;
			if(i==j-1)
			{
				i=0;
				j=n-1;
			}
			else
			{
				i++;
				j++;
			}
		}
		for(k=0;k<n;k++)
			cout<<a[k]<<" ";
		cout<<"\n";
		if(m%2==0)
			cout<<j+1<<" "<<a[j]<<"\n";
		else
			cout<<i+1<<" "<<a[i]<<"\n";
	}
	return 0;
}