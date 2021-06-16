#include <bits/stdc++.h>

using namespace std;

//FILE *f;

void binary_to_dec(int n)
{
    int dec=0, base=1, last_num;

    while(n)
    {
        last_num=n%10;
        n=n/10;
        dec=dec+last_num*base;
        base=base*2;
    }
    cout<<(char)dec;
    //fprintf(f, "%c", (char)dec);
}

int main()
{
    //f=fopen("debug.txt","w");
    string s;
    int i, dec;

    cin>>s;
    getchar();
    while(getline(cin, s))
    {
        dec=0;
        if(s=="___________")
            break;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
            {
                dec=dec*10;
                //cout<<dec<<endl;
            }
            else if(s[i]=='o')
            {
                dec=dec*10+1;
                //cout<<dec<<endl;
            }

        }
        //cout<<dec<<endl;
        binary_to_dec(dec);
    }

    //fclose(f);

    return 0;
}

/*
___________
| o   .  o|A
| o   . o |B
| o   . oo|C
| o   .o  |D
| o   .o o|E
| o   .oo |F
| o   .ooo|G
| o  o.   |H
| o  o.  o|I
| o  o. o |J
| o  o. oo|K
| o  o.o  |L
| o  o.o o|M
| o  o.oo |N
| o  o.ooo|O
| o o .   |P
| o o .  o|Q
| o o . o |R
| o o . oo|S
| o o .o  |T
| o o .o o|U
| o o .oo |V
| o o .ooo|W
| o oo.   |X
| o oo.  o|Y
| o oo. o |Z

*/

