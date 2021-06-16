#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int n, i, x = 0;

    cin>>n;

    int arr[n+1];

    for(i=0; i<n; i++)
        cin>>arr[i];
    arr[i] = arr[0];

    while(1)
    {
        for(i=0; i<n; i++)
        {
            if(abs(arr[i] - arr[i+1]) ==  x)
            {
                if(i+1 != n)
                    cout<<i+1<<" "<<i+2<<endl;
                else
                    cout<<i+1<<" "<<"1"<<endl;
                return 0;
            }
        }
        x++;
    }
    return 0;
}
