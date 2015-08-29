#include <bits/stdc++.h>
using namespace std;
long long reverse(long long n)
{
       int rev=0,rem=0,t=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10 + rem;
        n=n/10;
    }
    return rev;
}
int pal(long long n)
{
    int rev=0,rem=0,t=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10 + rem;
        n=n/10;
    }
    if(t==rev)
        return 1;
    else
        return 0;
}
void recpal(long long n,int a=0)
{
    if(pal(n)==1)
    {
        cout<<a<<" "<<n<<endl;
    }
    else
    {
        recpal(n+reverse(n),a+1);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        recpal(n);
    }
    return 0;

}
