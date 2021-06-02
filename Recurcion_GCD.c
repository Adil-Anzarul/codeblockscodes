//This program will find g.c.d. of two numbers using Recursion
#include<stdio.h>
int gcd(int a,int b)
{
    if (a%b==0)
        return b;
    else
        return gcd(b,a%b);
}

void main()
{
    printf("Enter two numbers\n");
    int a,b;
    scanf("%d%d",&a,&b);
    int c=gcd(a,b);
    printf("The G.C.D. of %d and %d is %d",a,b,c);
}
//# DONE CORRECTLY FINALLY !!!!!!!!!!!!!

