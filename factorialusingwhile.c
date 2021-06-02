//calculate factorial
#include<stdio.h>
int main()
{
int pro=1;
printf("Enter a number you want to find factorial of\n");
int n,i=1;
scanf("%d",&n);

while (i<=n)
{
pro=pro*i;
i++;
}
printf("factorial of %d is =%d",n,pro);
return 0;
}
