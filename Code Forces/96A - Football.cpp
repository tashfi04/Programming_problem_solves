#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int counter = 1;

    getline(cin, str);
    char a = str[0];
    for(int i=1; i<str.size(); i++)
    {
        if(str[i] == a)
            counter++;
        else
        {
            counter = 1;
            a = str[i];
        }
        //cout<<counter<<"------"<<a<<endl;
        if(counter == 7)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
