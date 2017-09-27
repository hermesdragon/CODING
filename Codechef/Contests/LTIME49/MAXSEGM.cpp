#include <bits/stdc++.h>
using namespace std;

void subArray(int arr[],int arr2[], int n)
{
	long long int ans = 0,temp = 0;
	int check[n] = {0};
    for (int i=0; i <n; i++)
    {
        for (int j=i; j<n; j++)
        {
        	for(int iter = 0;iter<n;iter++)
        		check[iter] = 0;

            for (int k=i; k<=j; k++)
            {
            	if(check[arr[k]] == 0)
            		check[arr[k]] = 1;
           		else
           		{
           			//cout<<"\n\nNOW!!\n\n";
           			continue;
           		}
            	//cout << arr[k] << " ";
            	temp += arr2[k];

            }
            //cout<<"==> "<<temp << endl;
            if(temp>ans)
            	ans = temp;
            temp = 0;
        }
    }
    cout<<ans<<"\n";
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(0);

	long long int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;

		int c[n],w[n];

		for(i=0;i<n;i++)
			cin>>c[i];
		for(i=0;i<n;i++)
			cin>>w[i];

		/*for(i=0;i<n;i++)
			cout<<w[i]<<" ";
		cout<<"\n";*/
		//subArray(c,w,n);
		long long int sum,ans;
		ans = 0;
		sum = 0;
		int hash[n],index[n];
		for(int p=0;p<n;p++)
			hash[p] = 0;
		for(i=0;i<n;i++)
		{
			//cout<<i<<" ";
			if( hash[c[i]] == 0)
			{
				sum += w[i];
				hash[c[i]] = 1;
				index[c[i]] = i;
			}
			else
			{
				i = index[c[i]];
				sum = 0;
				for(int p=0;p<n;p++)
					hash[p] = 0;
			}
			if(sum > ans)
				ans = sum;
			
		}
		cout<<ans<<"\n";

	}
	return 0;
}