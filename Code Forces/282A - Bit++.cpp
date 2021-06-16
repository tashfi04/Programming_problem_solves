#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n, x = 0;
     cin>>n;
     getchar();
     string s;
     while(n--)
     {
         getline(cin, s);
         if(s[1] == '+')
            x++;
         else
            x--;
     }
     cout<<x<<endl;

    return 0;
}
