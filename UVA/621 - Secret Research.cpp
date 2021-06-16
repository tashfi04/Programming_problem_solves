#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, lnth;
    string s;
    //FILE *f;
    //f = fopen("output.txt", "w");

    cin>>n;
    getchar();
    while(n--)
    {
        getline(cin, s);
        lnth = s.size();

        if((lnth == 1 && (s[0] == '1' || s[0] == '4')) || (lnth == 2 && s[0] == '7' && s[1] == '8'))
        {
            cout<<'+'<<endl;
            //fprintf(f, "+\n");
        }
        else if(s[lnth-2] == '3' && s[lnth-1] == '5')
        {
            cout<<'-'<<endl;
            //fprintf(f, "-\n");
        }
        else if(s[0] == '9' && s[lnth-1] == '4')
        {
            cout<<'*'<<endl;
            //fprintf(f, "*\n");
        }
        else if(s[0] == '1' && s[1] == '9' && s[2] == '0')
        {
            cout<<'?'<<endl;
            //fprintf(f, "?\n");
        }

        //fprintf(f, "Case %d: %d\n", i, opt);
    }
    //fclose(f);

    return 0;
}
