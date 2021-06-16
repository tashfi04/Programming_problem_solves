#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, count_=0;
    cin>>n;
    bool arr[100000];
    memset(arr, false, 100000);
    while(n--)
    {
        cin>>a;
        if(!arr[a])
        {
            arr[a]=true;
        }
        else
        {
            while(arr[a])
            {
                a++;
                count_++;
            }
            arr[a]=true;
        }
    }
    cout<<count_<<endl;

    return 0;
}
