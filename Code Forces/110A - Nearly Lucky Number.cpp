#include<stdio.h>

int main()
{
    long long n,a,i=0;
    scanf("%I64d",&n);

    while(n!=0)
    {

        a=n%10;
        n=n/10;
        if(a==4||a==7)
            i+=1;

    }
    if(i==4||i==7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
