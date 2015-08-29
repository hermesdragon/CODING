#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=10;
    int a[10],distinct=1;
    while(t--)
    {
        distinct=1;
        for(int i=0;i<10;i++)
        {
            cin>>a[i];
            a[i]%=42;
        }
        sort(a,a+10);
        for(int i=1;i<10;i++)
        {
            if(a[i]==a[i-1])
            {
                continue;
            }
            else
            {
                distinct++;
            }
        }
        cout<<distinct<<endl;
    }
    return 0;
}
