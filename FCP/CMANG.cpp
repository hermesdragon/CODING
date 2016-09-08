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

	char t[12][20] = {"A","A#","B","C","C#","D","D#","E","F","F#","G","G#"} ;
	char a[20];
	cin>>a;
	for(int i=0 ;i<12;i++)
	{
		if(strcmp(t[i],a) == 0)
		{
			cout<<t[i]<<" "<<t[(i+1)%12]<<" "<<t[(i+3)%12]<<" "<<t[(i+5)%12]<<" "<<t[(i+7)%12]<<" "<<t[(i+9)%12]<<" "<<t[(i+12)%12];
			cout<<" "<<t[i+1]<<" "<<t[(i+2)%12]<<" "<<t[(i+4)%12]<<" "<<t[(i+6)%12]<<" "<<t[(i+8)%12]<<" "<<t[(i+10)%12]<<" "<<t[(i+13)%12]<<"\n";
			break;
		}
	}


	
	return 0;
}