#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,s[4],x=0;
    for(i=0;i<4;i++)
        scanf("%d",&s[i]);
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(s[i]==s[j])
                x++;
        }
        if(i==0&&x>=3)
            {
                x=3;
                break;
            }
        if(i==1&&x>=2)
            {
                x=2;
                break;
            }
        /*if(i==2&&x>=1)
            {
                x=1;
                break;
            }*/
    }
    printf("%d\n",x);

    return 0;
}
