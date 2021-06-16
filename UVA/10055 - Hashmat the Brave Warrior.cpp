#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int main()
{
    //FILE *f;
    //f = fopen("output.txt", "w");
    long long a, b, opt;
    while(cin>>a>>b)
    {
        opt = abs(a-b);
        cout<<opt<<endl;
        //fprintf(f, "%d\n", opt);
    }

    //fclose(f);

    return 0;
}
