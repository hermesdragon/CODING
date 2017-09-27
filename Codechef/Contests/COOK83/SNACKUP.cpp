#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(0);

	int t,n,r,i,j,x,y,fx,fy;

	cin>>t;

	while(t--)
	{
		cin>>n;
		cout<<n<<"\n";
		r = n;
		x = 1;
		y = 2;
		fx = 1;
		fy = 2;
		while(r--)
		{
			x = fx;
			y = fy;
			cout<<n<<"\n";
			for(j=1;j<=n;j++)
			{
				cout<<j<<" "<<x<<" "<<y<<"\n";
				x++;
				y++;
				if(x>n)
					x = 1;
				if(y>n)
					y = 1;
			}
			fx++;
			fy++;
			if(fx>n)
				fx = 1;
			if(fy>n)
				fy = 1;
		}
	}
	return 0;
}