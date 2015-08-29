// Sieve of Eratosthenes using Vectors

#include <bits/stdc++.h>

struct num
{
	int val;
	bool mark;
};

int main(int argc, char const *argv[])
{
	int n;
    std::cin>>n;
	std::vector<num> v;
	num x;
	for (int i = 2; i <= n; ++i)
	{
		x.val = i;
		x.mark = false;
		v.push_back(x);
	}

	std::vector<num>::iterator it;
	for( it = v.begin(); it != v.end(); ++it)
	{
		if((*it).mark == false)
		{
			for (std::vector<num>::iterator i = it; i <= v.end(); i += (*it).val)
			{
				(*i).mark = true;
			}
			(*it).mark = false;
		}
	}

	for (std::vector<num>::iterator i = v.begin(); i != v.end(); ++i)
	{
		if((*i).mark == false)
		{
			printf("%d ", (*i).val);
		}
	}

	return 0;
}
