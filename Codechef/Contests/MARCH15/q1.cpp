#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long int t,x,y,k,n,flag,i;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>k>>n;
        flag=0;
        long int c[n],p[n];
        for(i=0;i<n;i++)
        	{
        		cin>>p[i]>>c[i];
        		if(c[i]<=k && (y+p[i])>=x)
        			flag=1;
        	}
        	if(flag==1)
        		cout<<"LuckyChef\n";
        	else
        		cout<<"UnluckyChef\n";
    }
    return 0;
}
