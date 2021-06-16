#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i, num_of_a = 0;

    cin>>s;

    for(i=0; i<s.size(); i++)
    {
        if(s[i] == 'a')
            num_of_a++;
    }

    if(num_of_a >= ((s.size()/2)+1))
    {
        cout<<s.size();
    }
    else
    {
        cout<<num_of_a*2 - 1<<endl;
    }

    return 0;
}
