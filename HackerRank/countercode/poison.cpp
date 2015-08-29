#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,tmp,cur,no=0;
	cin>>n;
	vector <long long int> a(n);
	vector <long long int>::iterator it;
	long long int e; 
	for(i=0;i<n;i++)
	{
		cin>>e;
		a[i]=e;
	}
	bool flag=0;
	e=0;
	while(flag==0)
	{
		flag=1;
		e++;
		for(i=a.size()-1;i>=1;i--)
		{
			if(a[i]>a[i-1])
			{
				flag =0 ;
				a.erase(a.begin() + i);
			}

		}
	}
	cout<<e-1<<"\n";

	return 0;
}
