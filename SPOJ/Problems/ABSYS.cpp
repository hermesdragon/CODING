#include <bits/stdc++.h>
using namespace std;

typedef int ll;

string con_ll_to_str( int a )
{
    stringstream mystr;
    mystr << a;
    return mystr.str();
}
ll con_str_to_ll( string st )
{
    ll numb = 0;
    int len = st.size(), i, j = 0;
    for(i=len-1;i>=0;i--)
    {
       numb += ( pow(10, j) * ( st[i] - '0' ) );
       j++;
    }
    return numb;
}

int main()
{
	
	#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif
	
	ios_base::sync_with_stdio(0);

	int t,i,j;
	string a,plus,b,equal,c;
	cin>>t;
	ll p1,p2,p3;
	while(t--)
	{
		cin>>a>>plus>>b>>equal>>c;
		if(a.find("machula")!=string::npos) 
		{
    		p2 = con_str_to_ll(b);
    		p3 = con_str_to_ll(c);
    		p1 = p3 - p2;
    		a = con_ll_to_str(p1);
		}
		else if(b.find("machula")!=string::npos) 
		{
    		p1 = con_str_to_ll(a);
    		p3 = con_str_to_ll(c);
    		p2 = p3 - p1;
    		b = con_ll_to_str(p2);
		}
		else
		{
    		p1 = con_str_to_ll(a);
    		p2 = con_str_to_ll(b);
    		p3 = p1 + p2;
    		c = con_ll_to_str(p3);
		}
		cout<<a<<" "<<plus<<" "<<b<<" "<<equal<<" "<<c<<"\n";
	}
	
	return 0;
}