#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int n, p, i, black = 0, white = 0, odd, even;

    cin >> n;

    //int arr[n/2];
    bool arr[n];
    memset(arr, 0, n);

    for(i=0; i<n/2; i++)
    {
        cin >> p;
        arr[p-1] = 1;
    }
    //for(i=0; i<n; i++)
       //cout<<arr[i]<<" ";
    //cout<<endl;

    //sort(arr, arr+n);

    even = 0;
    odd = 1;

    while(odd<=n)
    {
        if(arr[even] == 1 && arr[odd] == 0)
        {
            white += abs(even-odd);
            even+=2;
            odd+=2;
        }
        if(arr[even] != 1)
            even+=2;
        if(arr[odd] != 0)
            odd+=2;
    }

    /*while(odd<=n)
    {

        if(arr[even] == 1)
        {
            if(arr[odd] == 0)
            {
                white += abs(even-odd);
                even+=2;
                odd+=2;
            }
            else
                odd+=2;
        }
        else
            even+=2;
    }*/

    even = 0;
    odd = 1;

    while(even<=n-1)
    {
        if(arr[odd] == 1 && arr[even] == 0)
        {
            black += abs(odd-even);
            even+=2;
            odd+=2;
        }
        if(arr[odd] != 1)
            odd+=2;
        if(arr[even] != 0)
            even+=2;
    }
    if(white<black)
        cout<<white<<endl;
    else
        cout<<black<<endl;

    return 0;
}
