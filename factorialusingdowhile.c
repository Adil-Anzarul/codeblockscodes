#include <stdio.h>
int main()
{
int pro=1;
printf("Enter a number you want to find factorial of\n");
int n,i=1;
scanf("%d",&n);

do
{
pro=pro*i;
i++;
}while(i<=n);
printf("factorial of %d is =%d",n,pro);
return 0;

}
