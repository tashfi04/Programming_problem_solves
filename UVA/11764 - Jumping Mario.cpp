#include <bits/stdc++.h>
using namespace std;

int main()
{
    //FILE *f;
    //f = fopen("test.txt", "w");

    int t, n, low_jump, high_jump, current, next, i;

    cin>>t;

    for(i = 1; i <= t; i++)
    {
        low_jump = high_jump = 0;

        cin>>n;
        cin>>current;
        n--;
        while(n--)
        {
            cin>>next;
            if(next>current)
                high_jump++;
            else if(next<current)
                low_jump++;
            current = next;
        }
        printf("Case %d: %d %d\n", i, high_jump, low_jump);
    }

    //fclose(f);

    return 0;
}
