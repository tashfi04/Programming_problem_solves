#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100];
    int i,u=0,l=0;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if('a'<=s[i]&&s[i]<='z')
            l+=1;
        else
            u+=1;
    }
    if(l>=u)
        {
            for(i=0;i<strlen(s);i++)
                s[i]=tolower(s[i]);
        }
    else
        {
            for(i=0;i<strlen(s);i++)
                s[i]=toupper(s[i]);
        }
    printf("%s\n",s);

    return 0;
}
