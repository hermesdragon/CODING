#include<bits/stdc++.h>
using namespace std;
int ans;
long long int recur(long long int n, long long int s)
{
    if(n*(n+1)/2==s)
        return ans;
    ans++;
    if((n*(n+1)/2)-s<=n-1)
        return ans;
    if((n*(n+1)/2)-s>=n)
    return recur(n-1,s-1);
}
int main()
{
     ios_base::sync_with_stdio(0);
     long long int t,n,s,real;
     cin>>t;
     while(t--)
     {
         ans=0;
         cin>>n>>s;
         real=recur(n,s);
         cout<<real<<endl;
     }
     return 0;
}
