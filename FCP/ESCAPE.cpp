#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long int t,m,i,j,temp,myn=100000;
    cin>>t;
    while(t--)
    {
        myn=100000;
        cin>>m;
        long long int a[m][m];
         for(i=0;i<m;i++)
            for(j=0;j<m;j++)
            cin>>a[i][j];
        if(m==1)
        {
            cout<<a[0][0]<<endl;
        }
        else
        {
            for(i=m-2;i>=0;i--)
            {
                a[i][0]+=min(a[i+1][0],a[i+1][1]);
                a[i][m-1]+=min(a[i+1][m-1],a[i+1][m-2]);

                for(j=1;j<m-1;j++)
                {
                    temp=min(a[i+1][j-1],a[i+1][j]);
                    a[i][j]+=min(temp,a[i+1][j+1]);
                }

            }
            myn=a[0][0];
            for(j=0;j<m;j++)
            if(myn>a[0][j])
                myn=a[0][j];
        cout<<myn<<endl;
    }
    }
    return 0;
}
