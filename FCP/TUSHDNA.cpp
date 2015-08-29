#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n,m,t;
    cin>>t;
    cin>>n>>m;
    char a[100000],b[50],c[130];

    cin>>a;
    for(int i=0;i<strlen(a);i++)
            c[(int)a[i]]++;
    while(m--)
    {
        for(int i=0;i<130;i++)
            c[i]=0;
        for(int i=0;i<strlen(a);i++)
            c[(int)a[i]]++;
        cin>>b;
        for(int i=0;i<strlen(b);i++)
        {
            c[(int)b[i]]
        }
    }
    return 0;
}
