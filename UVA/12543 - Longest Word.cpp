#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, max_=0;
    string s,temp;
    while(cin>>s)
    {
        if(s=="E-N-D")
            break;
        else
        {
            j=0;
            /*if(s.size()>max_)
            {
                max_=s.size();
                temp=s;
            }*/
            for(i=0; i<s.size(); i++)
            {
                if(isalpha(s[i]) || s[i]=='-')
                {
                    j++;
                }
                if(j>max_)
                {
                    max_=j;
                    temp=s;
                }
            }
        }
    }
    i=0;
    while(i<temp.size())
    {
        temp[i]=tolower(temp[i]);
        if(isalpha(temp[i]) || temp[i]=='-')
        {
            cout<<temp[i];
        }
        i++;
    }
    cout<<endl;


    return 0;
}
