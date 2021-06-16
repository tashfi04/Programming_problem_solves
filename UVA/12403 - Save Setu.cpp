#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long amount = 0, t, k;
    char s[7];
    //FILE *f;
    //f = fopen("test.txt", "w");

    cin>>t;
    getchar();

    while(t--)
    {
        cin>>s;
        if(s[0] == 'd')
        {
            cin>>k;
            getchar();
            amount += k;
        }
        else
        {
            cout<<amount<<endl;
            //fprintf(f, "%d\n", amount);
        }
    }
    //fclose(f);

    return 0;
}
