#include<stdio.h>
int rev(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int m=rev(n);
    printf("The reverse of %d is %d ",n,m);
    return 1;
}


int rev(int a)
{
    int m=0;
    while(a!=0)
    {
        m=m*10+(a%10);
        a=a/10;
    }
    return m;
}
