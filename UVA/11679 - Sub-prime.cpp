#include <bits/stdc++.h>

using namespace std;

int main()
{
    //FILE *f;
    //f = fopen("output.txt", "w");
    int n, b, i, d, c, v;
    bool opt;

    while(cin>>b>>n && b != 0 && n != 0)
    {
        opt = true;
        int reserves[b+1];
        for(i=1; i<=b; i++)
        {
            cin>>reserves[i];
        }

        while(n--)
        {
            cin>>d>>c>>v;
            reserves[d] -=v;
            reserves[c] +=v;
        }

        for(i=1; i<=b; i++)
        {
            if(reserves[i] < 0)
            {
                opt = false;
                break;
            }
        }

        if(opt)
        {
            cout<<"S"<<endl;
            //fprintf(f, "S\n");
        }
        else
        {
            cout<<"N"<<endl;
            //fprintf(f, "N\n");
        }
    }

    //fclose(f);

    return 0;
}
