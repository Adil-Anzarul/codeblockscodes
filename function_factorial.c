#include<stdio.h>
int factorial(int a)
{
    int pro=1;
    for(int i=1;i<=a;i++)
    {
        pro=pro*i;
    }
    return pro;
}
void main()
{printf("Enter a number \n");
int n;
scanf("%d",&n);
int r=factorial(n);
printf("factorial %d = %d",n,r);
}
