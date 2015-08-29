#include<iostream>
using namespace std;
int main()
{
    unsigned long long n,k,q,m,i=0,num,pos,f=0;
    cin>>n>>k;
    pos=n;
    while(n--)
    {
        cin>>num;
        i++;
        if(num==0 || num==1)
        if(num==0 && f==0)// f is there to check the position of first 0 in the path
            {pos=i;
             f=1;
            }
    }
    cin>>q;
    if(q>0)
    while(q--)
    {
        cin>>m;
        if(m<pos && m<=k+1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;

}
