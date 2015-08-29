#include<bits/stdc++.h>

using namespace std;
int checkpalin(string s,int i,int j)
{
    int mark=0,mid=(i+j)/2;
    for(;i<=j;i++,j--)
        if(s[i]==s[j])
            continue;
        else
        {
            mark=1;
            break;
        }
    return mark;
}
int main()
{
    ios_base::sync_with_stdio(0);
    string s;
    cin>>s;
    int k,i,j,m,flag=1,len=s.size();
    cin>>k;
    j=-1;
    if(k<=len && len%k==0)
    for(i=1;i<=k;i++)
    {
        flag=0;
        m=j+1;
        j=(len/k)*i - 1;
        flag=checkpalin(s,m,j);
        if(flag==0)
            continue;
        else
            break;
    }
    if(flag==1)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
