#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;
int main()
{
    unsigned long long n, m, a, l = 0, r = 0;
    cin>>n>>m>>a;
//    m -= a;

    l += n/a;
    r += m/a;
    if(n%a != 0)
        l++;
    if(m%a != 0)
        r++;
//cout<<l<<"---"<<r<<endl;
    cout<<l*r<<endl;

    return 0;
}

