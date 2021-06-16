#include <bits/stdc++.h>

using namespace std;

int main()
{
    //FILE *f;
    //f = fopen("output.txt", "w");
    int n, b, h, w, p, a, opt;
    int i, j;

    while(cin>>n>>b>>h>>w)
    {
        opt = INT_MAX;
        for(i = 1; i<=h; i++)
        {
            cin>>p;
            for(j = 1; j<=w; j++)
            {
                cin>>a;
                //cout<<"h : "<<h<<"w : "<<w<<endl;
                if(n<=a)
                {
                    if(n*p<=b && n*p<opt)
                    {
                        opt = n*p;
                    }
                }
            }
        }
        if(opt == INT_MAX)
        {
            cout<<"stay home"<<endl;
            //fprintf(f, "stay home\n");
        }
        else
        {
            cout<<opt<<endl;
            //fprintf(f, "%d\n", opt);
        }
    }

    //fclose(f);

    return 0;
}
