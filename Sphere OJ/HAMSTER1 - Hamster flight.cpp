#include <bits/stdc++.h>

#define pi 3.141592654

using namespace std;

int main()
{
    int t, i, vo, k1, k2;
    double x, y, angle;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d", &vo, &k1, &k2);

        if(k1==0)
        {
            /*  WARNNING  */
            //CAREFUL ABOUT PUTTING THE ANGLE DIRECTLY AS
            //USING ONLY 3 DIGITS AFTER THE DECIMAL
            //WILL CAUSE THE VALUE OF SIN TO BE WRONG
            angle=1.571;
            y=(double)(vo*vo)/*sin(angle)sin(angle)*//20.0;
        }
        else if(k2==0)
        {
            /*  WARNNING  */
            //CAREFUL ABOUT PUTTING THE ANGLE DIRECTLY AS
            //USING ONLY 3 DIGITS AFTER THE DECIMAL
            //WILL CAUSE THE VALUE OF SIN TO BE WRONG
            angle=0.785;
            x=(double)(vo*vo/*sin(2.0*angle)*/)/10.0;
        }
        else
        {
            angle=(double)(4.0*k1/k2);
            angle=(double)(pi-atan(angle))/2.0;
            //printf("%.3lf\n", angle);
            x=((double)(vo*vo*sin(2.0*angle)))/10.0;
            y=((double)(vo*vo*sin(angle)*sin(angle)))/20.0;
            //point=(k1*vo*vo*sin(2*angle)/10)+(k2*vo*vo*sin(angle)*sin(angle)/20);
            //printf("%.3lf %.3lf\n", angle, point);
        }
        printf("%.3lf %.3lf\n", angle, k1*x+k2*y);
    }

    return 0;
}
