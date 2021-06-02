#include<stdio.h>
int fact(int a)
{

    int i=1;
    int pro=1;
    for(i=1;i<=a;i++)
    {

        pro=pro*i;
    }
    return pro;
}


void main()
{

    printf("Enter n and r to find nCr \n");
    printf("Enter n:  ");
    int n;
    scanf("%d",&n);
    printf("Enter r:  ");
    int r;
    scanf("%d",&r);
    int result=fact(n)/(fact(r)*fact(n-r));
    printf("%dC%d is = %d",n,r,result);

}
