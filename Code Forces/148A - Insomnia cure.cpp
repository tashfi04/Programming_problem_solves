#include<stdio.h>
int main()
{
    int k,l,m,n,d,j;
    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
    int p[d+5],i;
    for(i=1;i<=d;i++)
    {
        p[i]=0;
    }

    for(j=k;j<=d;j+=k)
    {
        p[j]=1;
    }
    for(j=l;j<=d;j+=l)
    {
        p[j]=1;
    }
    for(j=m;j<=d;j+=m)
    {
        p[j]=1;
    }
    for(j=n;j<=d;j+=n)
    {
        p[j]=1;
    }
    j=0;
    for(i=1;i<=d;i++)
    {
        if(p[i]==1)
            j++;

    }
    printf("%d\n",j);
    return 0;
}
