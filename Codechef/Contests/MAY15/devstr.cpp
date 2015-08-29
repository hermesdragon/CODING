#include <bits/stdc++.h>
using namespace std;
void switchindex(char a[],long int i)
{
	if(a[i]=='0')
		a[i]='1';
	else 
		a[i]='0';
}
void forone(char a[],int n)
{
	char cur='0';
	char b[n],c[n];
	long int ans1=0,ans2=0;
	for (long int i = 0; i < n; i++)
	{
		b[i]=cur;
		if(cur=='0')
			cur='1';
		else
			cur='0';

	}
	//cout<<b<<endl;
	cur='1';
	for (long int i = 0; i < n; i++)
	{
		c[i]=cur;
		if(cur=='0')
			cur='1';
		else
			cur='0';
	}
	//cout<<c<<endl;
	for (long int i = 0; i < n; i++)
	{
		if(a[i]!=b[i])
			ans1++;
		else
			ans2++;
	}
	if(ans2<=ans1)
		{
			for (long int i = 0; i < n; i++)
				a[i]=c[i];
			cout<<ans2<<endl<<a<<endl;
		}
	else
		{
			for (long int i = 0; i < n; i++)
				a[i]=b[i];
			cout<<ans1<<endl<<a<<endl;
		}
	
}
int main()
{
	ios_base::sync_with_stdio(0);
	long int t,n,k,i,j,ans,count=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		char a[n];
		cin>>a;
		ans=0;
		count=0;
		char cur=a[0];
		if(k>1)
		{
			for(i=0;i<n;i++)
			{
				if(a[i]==cur)
				{
					count++;
				}
				else
				{
					cur=a[i];
					count=1;
				}
				if(count>k)
				{
					if(a[i+1]==cur)
						{
							switchindex(a,i);
							cur=a[i];
							ans++;
						}
					else
						{
							switchindex(a,i-1);
							cur=a[i];
							count=1;
							ans++;
						}
				}
			}
		}
		else
		{
			forone(a,n);
			continue;
		}
		cout<<ans<<endl<<a<<endl;
	}
	return 0;
}



///1110001