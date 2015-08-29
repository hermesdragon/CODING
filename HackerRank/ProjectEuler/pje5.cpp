#include <iostream>
#include <numeric>
using namespace std;

int gcd(int a, int b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

int lcm(int a, int b)
{
    int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}

int main()
{
    int t,n,i,j;
    int arr[40];
    cin>>t;
    while(t--)
    {
        cin>>n;


    for(i=1,j=0;i<=n;i++,j++)
        arr[j]=i;

    int result = accumulate(arr, arr + n, 1, lcm);

    cout << result << '\n';


}
 return 0;
}
