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
vector <int> factorize(int k) 
{
	vector <int> ans;
	while(k>1) {
		ans.push_back(sp[k]);
		k/=sp[k];
	}
	return ans;
}
int main()
{
	Sieve();
	vector<int> ans; 
	ans = factorize(8);
	for (int i = 0; i < ans.size(); ++i)
	{
		cout<<ans[i]<<" ";
	}
	ans = factorize(3);
	cout<<"\n";
	for (int i = 0; i < ans.size(); ++i)
	{
		cout<<ans[i]<<" ";
	}
    return 0;
}
