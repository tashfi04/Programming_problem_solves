#include <bits/stdc++.h>

using namespace std;

int main()
{
    //FILE *f;
    //f = fopen("output.txt", "w");
    int n, opt;

    while(cin>>n && n!= 0)
    {
        while(1)
        {
            opt = 0;
            while(n / 10 != 0)
            {
                opt += n % 10;
                n /= 10;
            }
            opt += n;
            if(opt / 10 == 0)
            {
                cout<<opt<<endl;
                //fprintf(f, "%d\n", opt);
                break;
            }
            else
            {
                n = opt;
            }
        }
    }

    //fclose(f);

    return 0;
}
