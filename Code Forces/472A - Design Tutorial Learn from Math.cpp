#include <bits/stdc++.h>
using namespace std;

int N = 1000000;
bool prime[1000000+1];

void sieve()
{
    memset(prime, true, sizeof(prime));

    for(int i=2; i*i<=N; i++)
    {
        if(prime[i] == true)
        {
            for(int j=i*i; j<=N; j+=i)
                prime[j] = false;
        }
    }
/*    for(int i=2; i<=30; i++)
        if(prime[i])
            cout<<i<<" ";
*/
}

int main()
{
    int n, x;

    sieve();

    while(cin>>n)
    {
        x = 2;
        while(x<n)
        {
            if(!prime[x] && !prime[n-x])
            {
                printf("%d %d\n", x, n-x);
                break;
            }
            else
                x++;
        }
    }

    return 0;
}
