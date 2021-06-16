#include <bits/stdc++.h>
using namespace std;

int main()
{
    //FILE *f;
    //f = fopen("test.txt", "w");

    int i = 1;
    char a[10];

    while(cin>>a && a[0]!= '*')
    {
        if(a[0] == 'H')
        {
            printf("Case %d: Hajj-e-Akbar\n", i);
        }
        else
            printf("Case %d: Hajj-e-Asghar\n", i);
        i++;
    }

    //fclose(f);

    return 0;
}
