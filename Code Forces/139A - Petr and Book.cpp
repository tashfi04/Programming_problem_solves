#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, x = 0;
    cin>>n;

    int arr[8];

    for(i=1; i<=7; i++)
        cin>>arr[i];
    i = 0;
    while(x < n)
    {
        i++;
        if(i > 7)
            i = 1;
        x += arr[i];
    }
    cout<<i<<endl;

    return 0;
}
