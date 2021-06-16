#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int main()
{
    //FILE *f;
    //f = fopen("output.txt", "w");
    int n, f, a, b, c, opt;

    cin>>n;
    while(n--)
    {
        opt = 0;
        cin>>f;
        while(f--)
        {
            cin>>a>>b>>c;
            opt += a*c;
        }
        cout<<opt<<endl;
    }

    //fclose(f);

    return 0;
}
