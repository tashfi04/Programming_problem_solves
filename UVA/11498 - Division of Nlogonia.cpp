#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, m, x, y;
    //FILE *f;
    //f = fopen("output.txt", "w");


    while(cin>>k && k!= 0)
    {
        cin>>n>>m;
        while(k--)
        {
            cin>>x>>y;
            if(x>n && y>m)
            {
                cout<<"NE"<<endl;
            }
            else if(x>n && y<m)
            {
                cout<<"SE"<<endl;
            }
            else if(x<n && y>m)
            {
                cout<<"NO"<<endl;
            }
            else if(x<n && y<m)
            {
                cout<<"SO"<<endl;
            }
            else
            {
                cout<<"divisa"<<endl;
            }
        }



        //fprintf(f, "%d\n", (max_-min_)*2);
    }
    //fclose(f);

    return 0;
}
