
/*#include <stdio.h>
void main()
{
    while (1)
    {
        printf(" For Computing Sin(X)\nEnter the value of x (in degrees):");
        float xd;
        scanf("%f", &xd);
        float x = (3.14 / 180) * xd;
        float pro = 1;
        int fact = 1;
        int op = -1;
        float result = 0;

        for (int i = 1; i <= 15; i += 2)
        {
            pro = 1;
            fact = 1;
            for (int j = 1; j <= i; j++)
            {
                pro = pro * x;
                fact = fact * j;
            }
            op = op * (-1);
            result += op * pro / fact;
        }
        printf("The value of Sin(%f) = %f\n", xd, result);
    }
}

*/

#include<stdio.h>
#include<math.h>
int main()
{
    while(1)
    {
        printf(" Enter the value of X in degree for finding SinX\n");
        float xd;
        scanf("%f",&xd);
        float x=xd*(3.14/180);
        float result=sin(x);
        printf("The value of Sin %f is %f\n",xd,result);
    }

    return 0;
}
