#include<stdio.h>
int prime(int);
void main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    int i=prime(n);
    if(i==0)
        printf("It is prime\n");
    else if(i==1)
        printf("It is not prime\n");
}

int prime(int a)
{   int indicator=0;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            indicator=1;
            break;
        }
    }
if(indicator==0)
    return 0;
else if(indicator==1)
    return 1;
}
