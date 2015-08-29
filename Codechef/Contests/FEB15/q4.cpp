#include<bits/stdc++.h>
using namespace std;
int a[10000000];
long long p,tmp1,tmp2,tmp3,tmp4;
int main()
{
    ios_base::sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    int i=0,ans=0;
    a[0]=1;
    for(i=1;i<10000000;i++)
        a[i]=(a[i-1]*(i%m))%m;
    while(n--)
    {
        cin>>p;
        if(p%2==0)
            tmp3=(((p/2)%m)*((p+1)%m))%m;
        else
            tmp3=((p%m)*(((p+1)/2)%m))%m;
        tmp3=((tmp3%m)*(p%m))%m;
        tmp3=tmp3-1;
        if(p+1<m)
            tmp3+=a[p+1];
        tmp3--;
        if(tmp3<0)
            tmp3+=m;
        tmp3%=m;
        ans=((ans%m)+(tmp3%m))%m;
    }
    cout<<ans%m;
    return 0;
}
