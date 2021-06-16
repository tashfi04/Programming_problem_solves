#include<stdio.h>
#include<string.h>
int main()
{
    char a[105],b[105];
    scanf("%s %s",a,b);

    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==b[i])
            a[i]='0';
        else
            a[i]='1';
    }
    printf("%s\n",a);

    return 0;
}
