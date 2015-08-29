#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int t,i;
	cin>>t;
	vector<int> a(t);
	for(i=0;i<t;i++) {cin>>a[i];}
	sort(a.begin(),a.end());
	for(i=0;i<t;i++) {cout<<a[i]<<"\n";}
	return 0;
}
