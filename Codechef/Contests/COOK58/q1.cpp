#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string s,ans;
        cin>>s;
        int a[26],flag=0,i,j,len;
        memset(a,0,sizeof(a));
        len=s.size();
        for(i=0;i<len;i++)
            a[s[i]-'a']++;

        for(j=0;j<10000;j++)
        for(i=0;i<26;i++)
            if(a[i]!=0)
            {

                a[i]--;
                ans = ans + (char)(i+'a');
            }
        len=ans.size();
        for(i=0;i<len-1;i++)
            if(ans[i]==ans[i+1])
        {
            flag=1;
            break;
        }
        if(flag==0)
            cout<<ans<<endl;
        else
            cout<<"-1\n";
    }
}
