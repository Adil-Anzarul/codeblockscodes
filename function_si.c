#include<stdio.h>
float si(float p,float  r,float t)
{   float a=(p*r*t)/100.0;
    return  a;
}
int main()
{   float a,b,c;
    printf("Enter principal\n");
    scanf("%f",&a);
    printf("Enter rate of interest\n");
    scanf("%f",&b);
    printf("Enter time\n");
    scanf("%f",&c);
    printf("Simple interest is = %.5f",si(a,b,c));
    return 0;
}
