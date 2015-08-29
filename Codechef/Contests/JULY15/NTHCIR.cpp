#include <bits/stdc++.h>
using namespace std;
///double comparison code used from stackoverflow
bool chekeq(double a, double b, double epsilon = 0.001)
{
    return std::abs(a - b) < epsilon;
}
int main()
{
    long long int t,n,p,m,b;
    cin>>t;
    double r1,r2,r3,r4,ans=0;
    cin>>n>>p>>m>>b;
    cin>>r1>>r2>>r3>>r4;
    double k1,k2,k3,k4,kn,sum,sqp;
    k1=(1/r1)*(-1);
    k2=(1/r2);
    k3=(1/r3);
    k4=(1/r4);
if(t<=1000)
{
    while(t--)
    {
        n=((p%m)*(n%m))%m + b;
        if(n==1)
            ans+=r1;
        else if(n==2)
            ans+=r2;
        else if(n==3)
            ans+=r3;
        else if(n==4)
            ans+=r4;
        else
        {
            for(long long int i=5;i<=n;i++)
            {
                sum= k1 + k2 + k4;
                sqp=2*sqrt(k1*k2 + k2*k4 + k4*k1);
                if(chekeq(k3,sum+sqp)==true)
                    kn=sum-sqp;
                else
                    kn=sum+sqp;
                k3=k4;
                k4=kn;
            }
            k3=1/r3;
            k4=1/r4;
            kn=1/kn;
            ans+=kn;
        }
    }
    printf("%.6f\n",ans);

}
else
{
    while(t--){
    n=((p%m)*(n%m))%m + b;
        if(n==1)
            ans+=r1;
        else if(n==2)
            ans+=r2;
        else if(n==3)
            ans+=r3;
        else if(n==4)
            ans+=r4;
        else
        {
            kn=(n-4)*(n-4)*(k1+k2)+k4+2*(n-4)*sqrt(k1*k2+k2*k4+k1*k4);
        }
        kn=1/kn;
        ans+=kn;
    }
    printf("%.6f\n",ans);
}
    return 0;
}
