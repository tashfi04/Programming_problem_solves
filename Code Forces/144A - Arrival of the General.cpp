#include<stdio.h>
int main()
{
    int n,i,j=0,k=0,x,y,c,a[110];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x=a[0];
    y=a[0];
    for(i=1;i<n;i++)
    {
        if(x<a[i])
        {
            x=a[i];
            j=i;
        }
        if(y>=a[i])
        {
            y=a[i];
            k=i;

        }
    }
    if(j<k)
    {
        c=j+n-1-k;
    }
    else
    {
        c=j+n-k-2;
    }
    printf("%d\n",c);

    return 0;
}
