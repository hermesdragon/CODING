#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector <vector<int>> v;
	int n,q,k;
	cin>>n>>q;
	int a,i,j;
	while(n--)
	{
		cin>>k;
		vector<int> temp;
		while(k--)
			{
				cin>>a;
				temp.push_back(a);
			}
		v.push_back(temp);
	}
	while(q--)
	{
		cin>>i>>j;
		cout<<v[i][j]<<endl;
	}
	return 0;
}