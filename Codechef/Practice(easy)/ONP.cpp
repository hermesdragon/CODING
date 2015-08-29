#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
int main()
{
    int t,i,len;
    cin>>t;

    while(t--)
    {
        stack<char> myst;
        char a[400];
        cin>>a;
        len=strlen(a);
        string ans;
        for(i=0;i<len;i++)
        {
            if(a[i]>='a' && a[i]<='z')
                ans += a[i];
            else
            {
                if(a[i]!=')')
                    myst.push(a[i]);
                else
                {
                    while(myst.top()!='(')
                            {
                                ans+=myst.top();
                                myst.pop();
                            }
                    myst.pop();
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
