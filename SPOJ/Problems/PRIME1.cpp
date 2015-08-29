#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long int n) {
    if (n <= 3) {
        return n > 1;
    }
 
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
 
    for (long long int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
 
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);

    long long int t,n,m,i;

    cin>>t;
    while(t--)
    {
        cin>>m>>n;

        for(i=m;i<=n;i++)
            if(isPrime(i)==true)
                cout<<i<<"\n";
        cout<<"\n";
    } 

    return 0;
}