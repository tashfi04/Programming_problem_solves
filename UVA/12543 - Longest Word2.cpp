#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, max_=0,start;
    string s, max_s;
    while(cin>>s)
    {
        if(s=="E-N-D")
            break;
        else
        {
            /*if(s.size()>max_)
            {
                max_=s.size();
                temp=s;
            }*/
            for(i=0; i<s.size(); i++)
            {
                if(isalpha(s[i]) || s[i]=='-')
                {
                    j=0;
                    while(isalpha(s[i]) || s[i]=='-')
                    {
                        i++;
                        j++;
                    }
                    if(j>max_)
                    {
                        max_=j;
                        start=i-j;
                        max_s=s.substr(start, max_);
                    }
                }
            }
            //max_s=s.substr(start, max_);
        }
    }
    //cout<<max_s<<endl;
    for(i=0; i<max_s.size(); i++)
    {
        max_s[i]=tolower(max_s[i]);
        cout<<max_s[i];
    }
    cout<<endl;

    return 0;
}
