#include<stdio.h>
int main()
{
    int n,a,b,i,x=0,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        x=x+b-a;
        if(i==1)
            y=x;
        if(x>y)
            y=x;
    }
    printf("%d\n",y);

    return 0;
}
