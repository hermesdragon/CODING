#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a1[26],b1[26];
    for(i=0;i<26;i++)
    {
        a1[i]=b1[i]=0;
    }
    char a[100000],b[100000];
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
         for(i=0;i<26;i++)
    {
        a1[i]=b1[i]=0;
    }
        int len=strlen(a),tmp;
        for(i=0;i<len;i++)
        {
            a1[(int)(a[i]-'a')]++;
            b1[(int)(b[i]-'a')]++;
        }
        for(i=0;i<26;i++)
        {
            tmp=min(a1[i],b1[i]);
            while(tmp--)
                cout<<(char)('a'+i);
        }
        cout<<endl;
    }
}
