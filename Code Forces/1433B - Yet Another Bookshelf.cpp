#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t, n, a, opt, count_a, temp;
 
    cin >> t;
 
    while(t--)
    {
        count_a = 0;
        opt = 0;
        temp = 0;
        cin >> n;
 
        while(n--)
        {
            cin >> a;
            
            if(a == 1)
            {
                count_a++;
                opt += temp;
                temp = 0;
            }
            else if(count_a >= 1)
                temp++;
        }
 
        if(count_a > 1)
            cout << opt << endl;
        else
            cout << 0 << endl;
    }
 
    return 0;
}