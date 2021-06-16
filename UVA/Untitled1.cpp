#include <bits/stdc++.h>
using namespace std;

int main()
{
    //FILE *f;
    //f = fopen("test.txt", "w");

    bool opt = true;
    string s;

    while(cin>>s && s!='#')
    {
        vector <char> temp;

        for(int i = s.size()-1; i > 0; i--)
        {
            if(s[i-1] < s[i])
            {
                sort(temp.begin(), temp.end());
                opt = false;
                break;
            }
            temp.insert(s[i]);
        }

        if(opt)
            cout<<"No Successor"<<endl;
        else
        {

        }
    }

    //fclose(f);

    return 0;
}
