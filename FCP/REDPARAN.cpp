#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,num,len,flag,maxl,l;
    long long int c[26];
    cin>>t;
    while(t--)
    {
        char a[1000000],b[1000000],ch;
        char * pEnd=a;
        cin>>a;
        len=strlen(a);
        flag=0;
        num=0;
        maxl=0;
        l=0;
        memset(c,0,sizeof(c));
        for(i=0,j=0;i<len;i++)
        {
            if(a[i]>'9')
            {
                b[j]=a[i];
                j++;
                a[i]=' ';
            }
        }
        for(i=0;i<len;i++)
        {
            if(a[i]!=' ')
                l++;
            else
                l=0;
            if(l>maxl)
                maxl=l;
        }
        if(maxl>10)
            flag=1;
        for(i=0;i<j;i++)
        {
            if(flag==1)
                break;
            num=strtoll(pEnd,&pEnd,10);
            if(islower(b[i]))
                c[b[i]-'a']+=num;
            else
                c[b[i]-'A']-=num;
        }
        for(i=0;i<26;i++)
            if(c[i]!=0)
            {
                flag=1;
                break;
            }
            if(flag==1)
                cout<<"NO\n";
            else
                cout<<"YES\n";
    }
    return 0;
}
