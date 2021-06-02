/* wap to find reverse  of number  */
#include<stdio.h>
void main()
{
int n,r;
printf("Enter a number\n");
scanf("%d",&n);
int rev=0;
for(;n!=0;n=n/10)    // condition n will also work
{r=n%10;
rev=rev*10+r;
}
printf("reverse of given number is= %d",rev);
}

