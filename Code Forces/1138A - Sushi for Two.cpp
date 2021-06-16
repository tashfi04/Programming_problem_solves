#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int n, i, t1 = 0, t2 = 0, opt = 0;
    cin>>n;
    int arr[n+1];

    cin>>arr[0];
    t1++;

    for(i=1; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i] == arr[i-1])
        {
            t1++;
        }
        else
        {
            t2 = t1;
            t1 = 1;
        }
        if(t1 <= t2 && t1*2 > opt)
            opt = t1*2;
    }

    cout<<opt<<endl;

    return 0;
}

