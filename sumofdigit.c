/* wap to find sum of digits of number  */
#include<stdio.h>
void main()
{
int n,r;
printf("Enter a number\n");
scanf("%d",&n);
int sum =0;
for(;n!=0;n=n/10)    // condition n will also work
{r=n%10;
sum+=r;
}
printf("Sum of digits= %d",sum);
}

