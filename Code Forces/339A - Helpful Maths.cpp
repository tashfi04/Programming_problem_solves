#include<stdio.h>
#include<string.h>
int main()
{
    char s[105],temp;
    scanf("%s",s);
    int i,j;
    for(i=0;i<strlen(s);i+=2)
    {
        for(j=i+2;j<strlen(s);j+=2)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("%s\n",s);

    return 0;
}
