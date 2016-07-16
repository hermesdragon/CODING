#include <stdio.h>

int main()
{
	long long int i,t,n,ans=0;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		t=i;
		while(t!=0)
		{
			ans++;
			t/=10;
		}
	}
	printf("%lld\n",ans);
	return 0;
}
