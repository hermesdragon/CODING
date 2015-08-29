#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string input,temp1,temp2,s,l;
        int g=0;
        scanf("%s",s);
        int a=0,b=s.length()-1;
        while(a<b)
        {
            if(s[a]==s[b])
            {
                a++;
                b--;
            }
            else
            {
                g++;
                if(g>1) break;
                temp1=s;
                temp2=s;
                if(temp1==string(temp1.rbegin(), temp1.rend()))
                    break;
                if(temp2==string(temp1.rbegin(), temp2.rend()))
                    break;
            }
        }
    }
    return 0;
}
