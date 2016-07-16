#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void work(vector<int>& num, int pos1, int pos2) {
	if (pos1 < 0) {
		num[num.size()-1] = 1;
		num.insert(num.begin(), 1);
		return;
   	} else if (num[pos1] < 9) {
      		num[pos1] = num[pos2] = num[pos1] + 1;
      		return;
   	} else {
     		num[pos1] = num[pos2] = 0;
      		//work(num, pos1-1, pos2+1);
      		while(true)
      		{
      			pos1-=1;
      			pos2+=1;
      			if(pos1<0)
      			{
      				num[num.size()-1] = 1;
					num.insert(num.begin(), 1);
					return;
      			}
      			else if(num[pos1] < 9)
      			{
      				num[pos1] = num[pos2] = num[pos1] + 1;
      				return;
      			}
      			else
      			{
      				num[pos1] = num[pos2] = 0;
      			}
      		}
      		return;
   	}
}

// returns true if v2 is greater than v1, false otherwise
bool comp(const vector<int>& v1, const vector<int>& v2) {
	if (v1.size() != v2.size()) 
		return v1.size() < v2.size();
	for (int i = 0; i < v1.size(); i++)
		if (v1[i] != v2[i])
			return v1[i] < v2[i];
	return false;
}

int main()
{
	
	#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(0);
	string k;
	vector<int> v,v2;
	ll t,i,len;
	cin>>t;
	while(t--)
	{
		
		cin>>k;
		len = k.size();
		for(i=0;i<len;i++)
			{
				v.push_back(k[i]-'0');
				v2.push_back(k[i]-'0');
			}

		for(i=0;i<len/2;i++)
		{
			v2[len-i-1] = v2[i];
		}
		if(comp(v,v2))
		{
			for(i=0;i<len;i++) cout<<v2[i];
			cout<<"\n";
		}
		else
		{
			if(len&1)
				work(v2,len/2,len/2);
			else
				work(v2,(len/2)-1,len/2);
			for(i=0;i<v2.size();i++) cout<<v2[i];
			cout<<"\n";
		}
		v.clear();
		v2.clear();
	}
	
	return 0;
}
