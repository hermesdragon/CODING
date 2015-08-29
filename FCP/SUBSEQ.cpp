#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int t,s,l;
  char a[1000],b[1000];
  cin>>a;
  l=a.size();
  sort(a,a+a.size());
  b=a;
  cout<<a<<"\t"<<b<<"\t"<<l;
  return 0;
}
