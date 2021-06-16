#include <bits/stdc++.h>

using namespace std;

int main()
{
    //FILE *f;
    //f = fopen("output.txt", "w");
    int n, w, y1, y2, opt;

    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        cin>>w;
        cin>>y1>>y2;
        opt = abs(y1 - y2);
        w--;

        while(w--)
        {
            cin>>y1>>y2;
            if(abs(y1 - y2) != opt)
            {
                opt = 2000;
            }
        }
        if(opt == 2000)
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }
        if(i != n)
            cout<<endl;
    }

    //fclose(f);

    return 0;
}
