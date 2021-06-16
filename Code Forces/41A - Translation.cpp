#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, s_size;
    string s, t;
    bool chk;

    while(cin>>s)
    {
        cin>>t;
        chk=true;

        s_size=s.size();
        if(s_size!=t.size())
        {
            cout<<"NO"<<endl;
            continue;
        }

        for(i=0 ; i<s_size; i++)
        {
            if(s[i]!=t[s_size-i-1])
            {
                chk=false;
                break;
            }
        }
        if(chk)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
