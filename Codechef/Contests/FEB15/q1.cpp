#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int t,ans1,ans2;
    string a;
    cin>>t;
    while(t--)
    {
        ans1=ans2=0;
        cin>>a;
        for(int i=0;i<a.size();i++)
        {
           if(i&1)
           {
               if(a[i]=='-')
                ans2++;
               else
                ans1++;
           }
           else
           {
               if(a[i]=='-')
                ans1++;
               else
                ans2++;
           }
        }
        cout<<min(ans1,ans2)<<endl;
    }
    return 0;
}
