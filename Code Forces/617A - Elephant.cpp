#include<stdio.h>
int main()
{
    int x,y,i;
    scanf("%d",&x);
    if(x>0&&x<=5)
    {
        i=1;
        printf("%d\n",i);
    }
    else if(x>5&&x<=1000000)
    {
        if(x%5==0)
        {
            y=x/5;
            printf("%d",y);
        }
        else
        {
            y=x/5;
            i=y+1;
            printf("%d",i);
        }
    }
    return 0;
}
