#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long int n;
    long long int a[100000];
    cin>>n;
    int i=0;
    while(n>0)
    {
        a[i]=pow(2,(int)log2(n));
        n=n-pow(2,(int)log2(n));
        i++;
    }
    i--;
    while(i>=0)
    {
        cout<<a[i]<<" ";
        i--;
    }
    return 0;
}
