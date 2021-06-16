#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, check_index, num_of_8s, i;

    string s;

    cin>>n;
    getchar();
    cin>>s;

    num_of_8s = 0;
    check_index = n - 11;

    for(i=0; i<check_index+1; i++)
    {
        if(s[i] == '8')
        {
            num_of_8s++;
        }
    }

    if(num_of_8s >= (check_index/2)+1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
