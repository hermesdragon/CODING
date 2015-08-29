#include <bits/stdc++.h>
using namespace std;
long long int K[50002][502];
int wt[100001],val[100001];

long long int knapSack(int W,int n)
{
   long long int i, w;

   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
   return K[n][W];
   }


struct jud
{
    int l,r,c;
};
bool mycom(jud a,jud b)
{
    return a.c < b.c;
}
int main()
{
    ios_base::sync_with_stdio(0);
    long long int t,n,kap,m,total;
    cin>>t;
    while(t--)
    {
        cin>>n>>kap>>m;
        jud jth[m];
        total=0;
        vector<int> endar(n,-1);
        int a[n],i,j=0,k=0,cost[n];
        for(i=0;i<n;i++)
            {
                cost[i]=321312;
            }
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            total+=a[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>jth[i].l>>jth[i].r>>jth[i].c;
        }
        sort(jth,jth+m,mycom);
        for(i=0;i<m;i++)
        {
            for(j=jth[i].l-1;j<jth[i].r;j++)
            {
                if(endar[j]==-1)
                {
                    cost[j]=jth[i].c;
                    endar[j]=jth[i].r-1;
                }
                else
                    j=endar[j];
            }
        }
        j=0;
        for(i=0;i<n;i++)
        {
            if(a[i]<0 && cost[i]!=321312)
            {
                val[j]=(-1)*a[i];
                wt[j]=cost[i];
                j++;
            }
        }
       // for(i=0;i<neg;i++)
         //   cout<<val[i]<<"\t"<<wt[i]<<endl;
        cout<<total+knapSack(kap,j)<<endl;
    }
}
