#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, s, opt;

    cin>>t;

    while(t--)
    {
        cin>>s;
        opt = 0;

        while(s > 9)
        {
            opt += (s - (s % 10));
            s = (s / 10) + (s % 10);
        }

        opt += s;
        cout<<opt<<endl;
    }

    return 0;
}
