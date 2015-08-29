#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(0);
   int t;
   cin>>t;
   int n,i;
   while(t--)
   {
       cin>>n;
       long long int a[n],maxi=0;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]>maxi)
            maxi=a[i];
       }
       cout<<maxi<<endl;
   }
}
