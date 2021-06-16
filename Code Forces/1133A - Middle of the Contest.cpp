#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int h1, m1, h2, m2, x;
    char a;
    cin>>h1>>a>>m1>>h2>>a>>m2;

    if(h1 <= h2)
    {
        x = h2*60 + m2 - h1*60 - m1;
    }
    else
    {
        x = 24*60 + (h2*60 + m2 - h1*60 - m1);
    }
    x = x/2;
    x = h1*60 + m1 + x;
    m1 = x%60;
    h1 = x/60;
    if(h1>23)
        h1 = h1%24;

    if(h1<10)
        cout<<"0"<<h1<<a;
    else
        cout<<h1<<a;
    if(m1<10)
        cout<<"0"<<m1<<endl;
    else
        cout<<m1<<endl;

    return 0;
}
