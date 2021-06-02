#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    printf("Enter two numbers\n");
    int a,b;
    scanf("%d%d",&a,&b);
    printf(" Sum of %d and %d is = %d",a,b,add(a,b));
    return 0;
}
