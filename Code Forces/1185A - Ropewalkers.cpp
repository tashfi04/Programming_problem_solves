#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[3], d, time = 0;

    cin>>a[0]>>a[1]>>a[2]>>d;

    sort(a, a+3);

    if(a[1] - a[0] < d)
        time = d - (a[1] - a[0]);
    if(a[2] - a[1] < d)
        time += d - (a[2] - a[1]);

    cout<<time<<endl;

    return 0;
}
