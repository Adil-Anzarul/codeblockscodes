#include<stdio.h>
int sum_of_digits(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int m=sum_of_digits(n);
    printf("The sum of digits of %d is %d ",n,m);
    return 1;
}


int sum_of_digits(int a)
{
    int m=0;
    while(a!=0)
    {
       m+=a%10;
        a=a/10;
    }
    return m;
}
