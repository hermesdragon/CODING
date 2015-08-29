#include <bits/stdc++.h>
using namespace std;
long long int a[2001][2001],n=4001,rownumber,i,per=1000000000,arr[4001][4001];
/*long long C(long long int n,long long int r) {
    if(r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
    long long int ans = 1;
    long long int i;
    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }
    return ans;
    def get_all_substrings(input_string):
  length = len(input_string)
  return [input_string[i:j+1] for i in xrange(length) for j in xrange(i,length)]

t=input()
for i in range(t):
	n,q=map(int,raw_input().split())
	a=raw_input()
	subst=get_all_substrings(a)
	sete=set(subst)
	d=[]
	for l in sete:
		d.append(subst.count(l))
	for f in range(q):
		h=input()
		ans=0
		for o in range(len(d)):
			if(d[o]>=h):
				ans+=ncr(d[o],h)
		print ans



}*/
//Pascals triangle code used from code comp. :D
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
/*
python ncr formula used from stack overflow.
import operator as op
def ncr(n, r):
    r = min(r, n-r)
    if r == 0: return 1
    numer = reduce(op.mul, xrange(n, n-r, -1))
    denom = reduce(op.mul, xrange(1, r+1))
    return numer//denom

*/
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
