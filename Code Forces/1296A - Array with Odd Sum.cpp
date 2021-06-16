#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, a, sum;
    bool hasOdd, hasEven;

    cin>>t;

    while(t--)
    {
        sum = 0;
        hasEven = hasOdd = false;
        cin>>n;

        while(n--)
        {
            cin>>a;

            sum += a;

            if(a % 2 == 0)
                hasEven = true;
            else
                hasOdd = true;
        }

        if((sum % 2 != 0) || (hasEven && hasOdd))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
