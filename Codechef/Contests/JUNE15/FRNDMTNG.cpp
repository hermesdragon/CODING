#include<bits/stdc++.h>
using namespace std;

int main()
{
    float T,t1,t2,w1,w2,ans,f,s1,s2;
    cin>>T;
    while(T--)
    {
        ans=0;
        cin>>t1>>t2>>w1>>w2;
        s1=t1;s2=t2;
        if(w1>t2)
            w1=t2;
        if(w2>t1)
            w2=t1;
        if(t1+w1<t2)
            t2=t1+w1;
        if(t2+w2<t1)
            t1=t2+w2;
        if(w1==0 && w2==0)
        {
            printf("0.000000\n");
        }
        else
        {
            ans += t1*t2;
            ans -= ((t1-w2)*(t1-w2))/((float)(2));
            ans -= ((t2-w1)*(t2-w1))/((float)(2));
            ans = ans/((float)(s1*s2));
            printf("%.6f\n",ans);
        }
    }
    return 0;
}
