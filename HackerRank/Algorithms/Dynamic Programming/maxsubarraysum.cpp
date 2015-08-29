#include <bits/stdc++.h>
using namespace std;
long long int maxsum(int a[],int n)
{
    int i;
    long long int sum=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            sum+=a[i];
    }
    if(sum!=0)
        return sum;
    else
    {
        sum=-10000;
        for(i=0;i<n;i++)
        {
            if(a[i]>sum)
                sum=a[i];
        }
        return sum;
    }
}
long long int maxcontsum(int a[],int n)
{
    long long int val=0,csum=0,bsum=0;
    int i;
    for(i=0;i<n;i++)
    {
        val=csum + a[i];    //2 5 -5 10
        if(val>0)           //val =12
            csum=val;       //current sum=12
        else                //best sum=12
            csum=0;
        if(csum>bsum)
            bsum=csum;
    }
    if(bsum>0)
    return bsum;
    else
    {
        bsum=-10000;
        for(i=0;i<n;i++)
        {
            if(a[i]>bsum)
                bsum=a[i];
        }
        return bsum;
    }

}
int main()
{
    ios_base::sync_with_stdio(0);
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cout<<maxcontsum(a,n)<<" "<<maxsum(a,n)<<endl;

    }
    return 0;
}
