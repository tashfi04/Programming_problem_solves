#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 1, j = 0, opt = 0;
    cin>>n;
    int a;

    while(i<=n)
    {
        cin>>a;
        if(a>j)
            j = a;
        if(i == j)
            opt++;
        i++;
    }

    cout<<opt<<endl;

    return 0;
}
