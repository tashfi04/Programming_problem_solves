#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char s[101];
    scanf("%s",s);
    char p[strlen(s)+1];
    //p[strlen(s)]='\0';
    for(i=0;i<strlen(s);i++)
        p[i]='0';
    for(i=0;i<strlen(s);i++)
    {
        for(j=i+1;j<strlen(s);j++)
        {
            if(s[i]==s[j])
            {
                p[j]='1';
            }
        }
    }
    j=0;
    for(i=0;i<strlen(s);i++)
    {
        if(p[i]=='0')
            j++;
    }

    if(j%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

    return 0;

}
