#include <bits/stdc++.h>
using namespace std;

#define MAX 10000000
#define lli long long int
bool v[MAX];
int len, sp[MAX];

void Sieve(){
	for (int i = 2; i < MAX; i += 2)
	{
		sp[i] = 2;//even numbers have smallest prime factor 2
		if(i!=2)
		v[i] = true;
	}	
	for (lli i = 3; i < MAX; i += 2){
		if (!v[i]){
			sp[i] = i;
			for (lli j = i; (j*i) < MAX; j += 2){
				if (!v[j*i])	v[j*i] = true, sp[j*i] = i;
			}
		}
	}
}

int factorize(int k,int x, int y) 
{
	vector <int> ans;
	int orig = k;
	while(k>1) {
		if(sp[k]>=x && sp[k]<=y)
		ans.push_back(sp[k]);
		k/=sp[k];
	}
	return ans.size();
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(0);

    Sieve();

    vector<int> temp;

	long long int n,i,j,result,number,exponent;
	cin>>n;

	long long int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];

	long long int q;
	cin>>q;

	long long int l,r,x,y;

	while(q--)
	{
		cin>>l>>r>>x>>y;

		result = 0;
		number = 0;
		exponent = 0;

		for(i=1;i<=1;i++)
		{
			if(v[i] == 0)
			{
				//cout<<i<<" is prime\n";
				for(j=l;j<=r;j++)
				{
					number = a[j-1];
					exponent = 0;
					
					/*while(number%i == 0)
					{
						exponent = exponent + 1;
						number = number/i;
					}*/
					//cout<<i<<" is prime and exponent with "<<a[j-1]<<" is "<<factorize(a[j-1],x,y)<<"\n";
					result = result + factorize(a[j-1],x,y);
				}
			}
		}

		cout<<result<<"\n";

	}

	return 0;
}