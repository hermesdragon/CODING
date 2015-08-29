#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    string str,temp;
    char ch;
    int m,n,k;
    cin>>m>>n;
    cin>>str;
    while(n--)
    {
        cin>>ch;
        if(ch=='T')
        {
            cin>>temp;
            str=str+temp;
        }
        else if(ch=='C')
            cout<<str.size()<<endl;
        else
        {
            cin>>k;
            str.erase(str.size()-k,k);
        }
    }
    return 0;
}
