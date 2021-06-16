#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, counter;
    string s;
    //FILE *f;
    //f = fopen("output.txt", "w");

    cin>>n;
    getchar();
    while(n--)
    {
        getline(cin, s);
        counter = 0;
        if(s.size() == 3)
        {
            if(s[0] == 'o')
                counter++;
            if(s[1] == 'n')
                counter++;
            if(s[2] == 'e')
                counter++;

            if(counter >= 2)
            {
                cout<<"1"<<endl;
                counter = -1;
            }



            if(s[0] == 't')
                counter++;
            if(s[1] == 'w')
                counter++;
            if(s[2] == 'o')
                counter++;

            if(counter >= 2)
            {
                cout<<"2"<<endl;
            }
        }
        else
            cout<<"3"<<endl;
        //fprintf(f, "Case %d: %d\n", i, opt);
    }
    //fclose(f);

    return 0;
}
