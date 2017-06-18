#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(0);
	
	long long int m  = 1000000007;
	int t,p,q,r,i,j,k;
	cin>>t;
	long long int ans,temp;
	while(t--) 
	{
	    cin>>p>>q>>r;
	    ans = 0;
	    long long int a[p],b[q],c[r];

	    //Take Input
	    for(i=0;i<p;i++)
	    	cin>>a[i];
	    for(i=0;i<q;i++)
	    	cin>>b[i];
	    for(i=0;i<r;i++)
	    	cin>>c[i];

	    //Sort all of them
	    sort(a,a+p);
	    sort(b,b+q);
	    sort(c,c+r);

	    long long int maxy = b[q-1];
	    std::vector<long long int> newa,newb,newc;
	    //Optimise
	    for(i=0;i<p;i++)
	    	if(a[i]<=maxy)
	    		newa.push_back(a[i]);

	    for(i=0;i<r;i++)
	    	if(c[i]<=maxy)
	    		newc.push_back(c[i]);

	    for(i=0;i<q;i++)
	    	if( a[0]<= b[i] && c[0] <= b[i])
	    		newb.push_back(b[i]);

	    long long int sizea = newa.size();
		long long int sizeb = newb.size();
	    long long int sizec = newc.size();

	    std::vector<long long int> suma,sumc;
	    suma.push_back(0);
	    sumc.push_back(0);
	    temp = 0;
	    for(i=0;i<sizea;i++)
	    {
	    	temp = ((temp%m) + (newa[i]%m))%m;
	    	suma.push_back(temp);
	    }
	    temp = 0;
	    for(i=0;i<sizec;i++)
	    {
	    	temp = ((temp%m) + (newc[i]%m))%m;
	    	sumc.push_back(temp);
	    }
	    i = 0;
	    long long int ans = 0;
	    long long int p1,p2,s1,s2,apr,cpr;
	    while(i<sizeb)
	    {
	    	p1 = upper_bound(newa.begin(), newa.end(), newb[i]) - newa.begin();
	    	s1 = suma[p1];
	    	p2 = upper_bound(newc.begin(), newc.end(), newb[i]) - newc.begin();
	    	s2 = sumc[p2];
	    	apr = ((((newb[i]%m)*(p1%m))%m) + (s1%m))%m;
	    	cpr = ((((newb[i]%m)*(p2%m))%m) + (s2%m))%m;
	    	ans = ((ans%m) + ((apr%m)*(cpr%m))%m)%m;
	    	i++;
	    }
	    cout<<ans<<"\n";

	}
	return 0;

}