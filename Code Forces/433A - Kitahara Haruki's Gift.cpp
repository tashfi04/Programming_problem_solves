#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, w, x = 0, y = 0;

    x=0;
    y=0;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>w;
        if(w == 100)
            x++;
        else
            y++;
    }
    if(x%2 != 0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        if(x == 0)
        {
            if(y%2 == 0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
