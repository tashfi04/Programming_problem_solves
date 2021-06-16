#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool chk=false;
    int n, i, j;
    cin>>n;
    int arr[n+2];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0; i<n-2; i++)
    {
        if(arr[i]+arr[i+1]>arr[i+2])
        {
            chk=true;
            break;
        }
    }
    if(chk)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
