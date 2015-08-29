#include<iostream>
using namespace std;
int main()
{
    int t,n,i=0,p;
    while(t--)
    {
        i=0;
        cin>>n;
        int a[n];
        while(n--)
           {
               cin>>p;
               a[i]=p;
               i++;

           }
           cout<<a[2];
    }

}
