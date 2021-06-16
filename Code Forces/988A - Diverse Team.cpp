#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int i,a[n],j,x=0,z=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                a[j]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
            continue;
        x++;
    }
    if(x<k)
        printf("NO\n");
    else
    {
        printf("YES\n");
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
                continue;
            if(z==k)
                break;
            printf("%d ",i+1);
            z++;
        }
    }

    return 0;
}
