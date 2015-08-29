#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,m,pb,dirt,ind,origlen;
	cin.tie(0);
	cin>>t;
	// pb is for number of even or odd.... pb = 3 for 5 and 6 as being 3 odd number and third even number resp..


	while(t--)
	{
		cin>>n>>m;
		//n = 12345
		//m = 54321
		origlen=n;
		dirt = (m-1)/n;
		if(n%2==0)
		{
			n=n/2;
			if(m%2!=0)
			{
				pb = (m+1)/2;
			}
			else
			{
				pb = m/2;
			}
			if(pb%n==0)
				ind = n;
			else
			{
				ind = pb%n;
			}
			if(m%2==0)
				ind  = 2*n - ind +1; 
		}
		else
		{
			n=n/2+1;
			//n = 6173
			if(m%2!=0)
			{
				pb = (m+1)/2 + 2;
				//pb = 27161
				if(pb%n==0)
					ind = n;
				else
				{
					ind = pb%n;
				}
			}
			else
			{
				pb = m/2;

				if(pb<=n-1)
				{
					ind = origlen - pb%n + 1;
				}
				else
				{
					ind = origlen - pb%n;
				}
			}
			
		}
		cout<<ind<<" "<<dirt<<"\n";
	}
	return 0;
}
/*
_ _ _ _
1 3 4 2
5 7 8 6
9 11 12 10
_ _ _ _ _
1 3 5 4 2
7 9 10 8 6

_ _  _ _  _  _
1 3  5 6  4  2
7 9 11 12 10 8










``		




*/