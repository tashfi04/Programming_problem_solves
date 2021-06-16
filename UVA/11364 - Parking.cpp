#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, a, max_, min_;
    cin>>t;
    //FILE *f;
    //f = fopen("output.txt", "w");


    while(t--)
    {
        max_ = INT_MIN;
        min_ = INT_MAX;
        cin>>n;
        while(n--)
        {
            cin>>a;
            if(a>max_)
                max_ = a;
            if(a<min_)
                min_ = a;
        }
        cout<<(max_-min_)*2<<endl;
        //fprintf(f, "%d\n", (max_-min_)*2);
    }
    //fclose(f);

    return 0;
}
