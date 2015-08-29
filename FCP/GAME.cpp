#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    string s;
    char maxchar;
    long int a[26],maxnum;
    cin>>t;
    while(t--)
    {
        cin>>s;
        maxnum=0;
        memset(a,0,sizeof(a));
        long int len=s.size(),sets=0;
        for(long int i=0;i<len;i++)
        {
            a[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]>maxnum)
            {
                maxnum=a[i];
                maxchar='a'+i;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(i!=(maxchar-'a'))
                sets+=a[i];
        }
        if(sets<maxnum)
            cout<<maxchar<<endl;
        else
            cout<<"-1\n";
    }
    return 0;
}
