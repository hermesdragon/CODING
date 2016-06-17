#include <bits/stdc++.h>
using namespace std;
long long int a[2001][2001],n=4001,rownumber,i,per=1000000000,arr[4001][4001];

void printPascal()
{

  for (rownumber = 0; rownumber < n; rownumber++)
  {
    for (i = 0; i <= rownumber; i++)
    {
      if (rownumber == i || i == 0)
           arr[rownumber][i] = 1;
      else
           arr[rownumber][i] = (arr[rownumber-1][i-1]%per + arr[rownumber-1][i]%per)%per;
    }
  }
}

int main()
{
	printPascal();
    long long int t,n,m,i,j,ans;
    ios_base::sync_with_stdio(0);
    cin>>t;
    while(t--)
    {
        ans=1;
        fin=1;
        cin>>n>>m;
        long long int a[n+1][m+1];
///==============================
        //To initailise the left column and top most row as 1
        i=j=0;
        while(i<=n)
        {
        	a[i][j]=1;
        	i++;
        }
        i=j=0;
        while(j<=m)
        {
        	a[i][j]=1;
        	j++;
        }
///==============================

        for(i=1;i<=n;i++)
            {
            	for(j=1;j<=m;j++)
            	{
                	a[i][j]=( ( arr[m+j-1][j] * a[i-1][j] ) + a[i][j-1] )%per;
            	}
            }
        printf("%lld\n",a[n][m]%per);
    }
    return 0;
}
