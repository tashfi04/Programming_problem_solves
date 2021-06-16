
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    string s;
    string s2="ertyuiop[]dfghjkl;'\\cvbnm,./";
    string s3="qwertyuiopasdfghjkl;zxcvbnm,";


    while(getline(cin,s))
    {
        for(i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
            {
                cout<<s[i];
                continue;
            }
            s[i]=tolower(s[i]);
            for(j=0; j<28; j++)
            {
                if(s[i]==s2[j])
                {
                    cout<<s3[j];
                    break;
                }
            }
        }
    }
    cout<<endl;

    return 0;
}
