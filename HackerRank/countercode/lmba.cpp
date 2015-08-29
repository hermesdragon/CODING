#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],big=n,small=1;
		if(n%2==0)
		{
			for(int i = n-1;i>=0;i = i-2)
			{
				a[i]=big;
				a[i-1]=small;
				big--;
				small++;
			}
		}
		else
		{
			for(int i = n-1;i>=1;i = i-2)
			{
				a[i]=big;
				a[i-1]=small;
				big--;
				small++;
			}
			a[0]=small;
		}
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<"\n";
	}
	return 0;
}