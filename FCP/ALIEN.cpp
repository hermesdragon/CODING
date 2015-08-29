#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        if(n>=5)
            cout<<(n-4)%3<<endl;
        else if(n==3)
            cout<<"2"<<endl;
        else if(n==2)
            cout<<"1"<<endl;
        else if(n==1)
            cout<<"1"<<endl;
        else if(n==4)
            cout<<"1"<<endl;
        else
            cout<<(n%3)<<endl;
    }
    return 0;
}
///1,2,3,4,5--->1*2*2*1
