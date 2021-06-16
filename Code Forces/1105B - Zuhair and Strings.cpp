#include<bits/stdc++.h>

using namespace std;

int counter[26];

int main()
{
    int k, n, i, temp_counter = 0, level = 0;
    string s;

    cin>>n>>k>>s;

    if(n == 1 && k == 1)
        level = 1;
    else if(n > 1)
    {
        if(s[0] == s[1])
            temp_counter++;
        if(temp_counter == k)
        {
            counter[s[0] - 'a']++;
            if(counter[s[0] - 'a'] > level)
                level = counter[s[0] - 'a'];
            temp_counter = 0;
        }
    }

    for(i=1; i<n; i++)
    {
        if(s[i] == s[i-1])
            temp_counter++;
        else
            temp_counter = 1;
        if(temp_counter == k)
        {
            counter[s[i] - 'a']++;
            if(counter[s[i] - 'a'] > level)
                level = counter[s[i] - 'a'];
            temp_counter = 0;
        }
    }

    cout<<level<<endl;

    return 0;
}
