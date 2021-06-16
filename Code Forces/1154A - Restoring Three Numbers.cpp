#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4], p = 0, x = 0;

    for(int i=0; i<4; i++)
    {
        cin>>arr[i];
        if(arr[i] > p)
            p = arr[i];
    }

    for(int i=0; i<4; i++)
    {
        if(arr[i] != p)
        {
            cout<<p - arr[i];
            x++;
            if(x <= 2)
                cout<<" ";
        }
    }
    cout<<endl;

    return 0;
}
