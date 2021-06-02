#include<stdio.h>
int main()
{
    int a,b,c,num;
    printf("Enter three(different) numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    num=(a>b && a>c)?a:((b>a && b>c)?b:c);
    printf(" Answer = %d",num);
}
/*
? :
It is called as conditional ternary operator
(condition)?(if true then this statement will execute):(if false then this statement will execute);
0?condition1:condition2;
then cond2 will execute
*/
