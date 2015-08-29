#include<stdio.h>

unsigned long long fib(int n)
{
  /* Declare an array to store fibonacci numbers. */
  unsigned long long f[n+1];
  int i;

  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0;
  f[1] = 1;

  for (i = 2; i <= n; i++)
  {
      /* Add the previous 2 numbers in the series
         and store it */
      f[i] = f[i-1] + f[i-2];
      f[i]=f[i]%1000000007;
  }

  return f[n];
}

int main ()
{
  int n,t;
  scanf("%d",&t);
  while(t--)
  {
      scanf("%d",&n);
      printf("%llu\n", fib(n));
  }

  return 0;
}
