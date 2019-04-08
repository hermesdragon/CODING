#include <bits/stdc++.h>
using namespace std;

int main()
{
	double m1,m2,k;
	int i,j;

	double arr[9] = {2,3,4,10,11,12,20,25,30};

	m1 = 2;
	m2 = 8;
	double newm1=0,newm2=0;
	std::vector<double> v1,v2;
	double s1,s2;
	while(newm1 == m1 && newm2 == m2)
	{
		for(i=0;i<9;i++)
		{
			if(abs(arr[i] - m1) <= abs(arr[i] - m2))
				v1.push_back(arr[i]);
			else
				v2.push_back(arr[i]);
		}
		s1 = 0;
		s2 = 0;
		for(j=0;j<v1.size();j++)
			s1+=v1[j];
		for(j=0;j<v2.size();j++)
			s2+=v2[j];
		newm1 = s1/v1.size();
		newm2 = s2/v2.size();
		if(newm1 != m1 || newm2 != m2)
		{
			m1 = newm1;
			m2 = newm2;
			v1.clear();
			v2.clear();
		}
	}

	cout<<"The two means are "<<m1<<" "<<m2<<"\n";
	cout<<"The two clusters are : \n";
	for(j = 0;j<v1.size();j++)
	{
		cout<<v1[j]<<" ";
	}
	cout<<"\n";
	for(j = 0;j<v2.size();j++)
	{
		cout<<v2[j]<<" ";
	}

	return 0;
}