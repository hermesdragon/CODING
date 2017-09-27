#include <bits/stdc++.h>
using namespace std;

#define MAX 10000000
#define lli long long int
bool v[MAX];
int len, sp[MAX];

void Sieve()
{
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


int main()
{
	Sieve();
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(0);

	lli t,n;

	cin>>t;
	while(t--)
	{
		cin>>n;
		if(v[n] == true)
			cout<<"no\n";
		else
			cout<<"yes\n";
	}
	return 0;
}