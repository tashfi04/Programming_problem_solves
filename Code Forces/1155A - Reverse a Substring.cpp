#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, l, r;

    string s;

    cin>>n;
    getchar();
    cin>>s;

    l = r = -1;

    for(i=0; i<s.size()-1; i++)
    {
        if(s[i+1] < s[i])
        {
            l = i+1;
            r = i+2;
            break;
        }
    }

    if(l == -1 && r == -1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl<<l<<' '<<r<<endl;
    }

    return 0;
}
