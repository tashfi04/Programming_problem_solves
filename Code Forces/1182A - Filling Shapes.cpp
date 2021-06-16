#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, output;

    cin>>n;

    if(n % 2 == 0)
    {
        n /= 2;
        output = pow(2, n);
        cout<<output<<endl;
    }
    else
        cout<<0<<endl;

    return 0;
}
