#include<stdio.h>
int sum,sub,mul;
void CALC(int ,int b);
int main()
{
    printf("Enter two numbers\n");
    int a,b;
    scanf("%d%d",&a,&b);
    CALC(a,b);
    printf("Sum= %d\n",sum);
    printf("Sub= %d\n",sub);
    printf("Mult= %d\n",mul);
    return 0;
}
void CALC(int a,int b)
{
    sum=a+b;
    sub=a-b;
    mul=a*b;
}
