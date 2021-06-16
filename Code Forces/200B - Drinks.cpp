#include<stdio.h>
int main()
{
    double n;
    double x=0;
    scanf("%lf",&n);
    double p[(int)n];
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&p[i]);
        x=x+p[i];
    }
    x=x/n;
    printf("%.12lf\n",x);

    return 0;
}
