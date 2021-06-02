#include<stdio.h>
float fact(int a)
{
    int pro=1;
    for(int i=1; i<=a; i++)
    {
        pro=pro*i;
    }
    return  (float)pro;
}
void main()
{
    printf("Enter number of terms\n");
    int n;
    scanf("%d",&n);
    float sum=0;
    for(int i=1; i<=n; i++)
    {
        sum=sum+(i/fact(i));
    }
    printf("The required sum is = %f",sum);
}
