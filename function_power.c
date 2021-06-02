#include<stdio.h>
float power(float,int);
void main()
{
    printf("Enter x and y to find x to the power y\n");
    float x;
    scanf("%f",&x);
    int y;
    scanf("%d",&y);
    float result=power(x,y);
    printf("%f",result);
}
float power(float x,int y)
{
    float pro=1;
    if(y>0)
    {
        pro=1;

        for(int i=1; i<=y; i++)
        {
            pro=pro*x;
        }
    }
    else if(y<0)
    {

        y=y*(-1);
        pro=1;
        for(int i=1; i<=y; i++)
        {
            pro=pro*x;
        }
        pro=1/pro;
    }
    return pro;
}


