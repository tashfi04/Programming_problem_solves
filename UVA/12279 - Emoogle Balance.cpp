#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i = 1, y, opt;
    //FILE *f;
    //f = fopen("output.txt", "w");


    while(cin>>n && n!= 0)
    {
        opt = 0;
        while(n--)
        {
            cin>>y;
            if(y == 0)
                opt--;
            else
                opt++;
        }
        printf("Case %d: %d\n", i, opt);
        //fprintf(f, "Case %d: %d\n", i, opt);
        i++;
    }
    //fclose(f);

    return 0;
}
