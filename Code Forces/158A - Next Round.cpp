#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;
int main()
{
    int n, k, i, opt = 0, x;
    cin>>n>>k;

    int arr[n+10];

    for(i=1; i<=n; i++)
        cin>>arr[i];

    i = 1;
    while(i<=n)
    {
        if(arr[i] <arr[k] || arr[i] == 0)
            break;
        else
            opt++;
        i++;
    }


    cout<<opt<<endl;

    return 0;
}

