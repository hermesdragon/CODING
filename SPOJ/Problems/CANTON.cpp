#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	
	#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(0);

	ll t,n,i;
	ll prev_sum,cur_sum,temp;
	ll numer_term,numer_iter,numerator;
	ll deno_term,deno_iter,denominator;
	cin>>t;
	while(t--)
	{
		cin>>n;
		prev_sum = 1;
		cur_sum = 5;
		temp = 0;
		if(n==1)
		{
			cout<<"TERM 1 IS 1/1\n";
			continue;
		}
		while(n>prev_sum)
		{
			prev_sum += cur_sum;
			temp = cur_sum;
			cur_sum +=4;
		}
		numer_term = n - (prev_sum - temp);
		numer_iter = (temp+1)/2;
		for(i=1;i<=numer_iter;i++)
		{
			if(numer_term == 1)
				numerator = i;
			numer_term--;
		}
		for(i = numer_iter-1 ; i>=1;i--)
		{
			if(numer_term == 1)
				numerator = i;
			numer_term--;
		}
		prev_sum = 3;
		cur_sum = 7;
		while(n>prev_sum)
		{
			prev_sum += cur_sum;
			temp = cur_sum;
			cur_sum +=4;
		}
		deno_term = n - (prev_sum - temp);
		deno_iter = (temp+1)/2;
		for(i=1;i<=deno_iter;i++)
		{
			if(deno_term == 1)
				denominator = i;
			deno_term--;
		}
		for(i = deno_iter-1 ; i>=1;i--)
		{
			if(deno_term == 1)
				denominator = i;
			deno_term--;
		}
		cout<<"TERM "<<n<<" IS "<<numerator<<"/"<<denominator<<"\n";
	}
	return 0;
}