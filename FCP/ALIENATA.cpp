#include<bits/stdc++.h>
using namespace std;
void multiply(int F[3]);

void power(int F[3], int n);

int fib(int n)
{
  int F[3] = {2,7,0};
  if (n == 0)
    return 0;
  if (n == 1)
    return 2;
  if (n == 2)
    return 7;
  power(F, n);
  return F[2];
}

/* Optimized version of power() in method 4 */
void power(int F[3], int n)
{
  if( n == 0 || n == 1)
      return;

  multiply(F);
  power(F,n-1);
  //if (n%2 != 0)
    // multiply(F);
}

void multiply(int F[3])
{
  int x =  F[0];
  int y =  F[1];
  int z =  F[2];
  F[2] = 2*x+y;
  F[1] = z;
  F[0] = y;
}
int main()
{
    ios_base::sync_with_stdio(0);
    unsigned long long ans,per=1000000000,first=2,second=7,next,i,n;
    int t;
    cin>>t;
    while(t--)
    {
        int F[3]={2,7,11};
        cin>>n;
        if(n==1)
            cout<<F[0]<<endl;
        else if(n==2)
            cout<<F[1]<<endl;
        else if(n==3)
            cout<<F[2]<<endl;
        else{n-=3;
        while(n--)
            multiply(F);
        cout<<F[2]<<endl;}
    }
}
