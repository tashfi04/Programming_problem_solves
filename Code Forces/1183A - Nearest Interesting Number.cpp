#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, sum , i, temp;

    cin>>a;

    i = a;
    while(1)
    {
        temp = i;
        sum = 0;
        while(temp != 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if(sum % 4 == 0)
        {
            cout<<i<<endl;
            break;
        }
        i++;
    }

    return 0;
}
