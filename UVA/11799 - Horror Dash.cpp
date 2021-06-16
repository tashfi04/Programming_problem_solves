#include <bits/stdc++.h>
using namespace std;

int main()
{
    //FILE *f;
    //f = fopen("test.txt", "w");

    int t, n, c, opt, i;

    cin>>t;

    for(i = 1; i <= t; i++)
    {
        opt = 0;

        cin>>n;
        while(n--)
        {
            cin>>c;
            if(c>opt)
                opt = c;
        }
        printf("Case %d: %d\n", i, opt);
    }

    //fclose(f);

    return 0;
}
