#include<bits/stdc++.h>
using namespace std;
///double comparison code used from stackoverflow
bool chekeq(double a, double b, double epsilon = 0.000001)
{
    return std::abs(a - b) < epsilon;
}
int main()
{
    long long int n,t,m,i,j;
    cout<<setprecision(6)<<fixed;
    double ans,draw,temp,fin;
    cin>>t;
    while(t--)
    {
        ans=1;
        temp=1;
        draw=0;
        cin>>n>>m;
        double a[n][m];
        for(i=0;i<n;i++)
            {
                temp=1;
                for(j=0;j<m;j++)
                {
                    cin>>a[i][j];
                    a[i][j]*=25;//yolo!! :/
                    temp*=a[i][j];
                }
                draw+=temp;
            }
        for(j=0;j<m;j++)
            ans*=a[0][j];
        fin=ans/draw;
        if(ans==0)
            cout<<"0.000000"<<"\n";
        else
        cout<<fin<<"\n";
    }
    return 0;
}
