#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    long long int t;
    while(a)
    {
        t = a;
        a = b%a;
        b = t;
    }
    return b;
}
int main()
{
	ios_base::sync_with_stdio(0);
	long long int t,n;
	cin>>t;
	long long int a[100000];
	while(t--)
    {
        cin>>n;

        for(long long int i=0;i<n;i++)
            cin>>a[i];
        long long int ans = a[0];
        for(long long int i=1;i<n;i++)
        {
            ans = gcd(ans,a[i]);
        }
        cout<<ans<<endl;
    }
	return 0;
}

