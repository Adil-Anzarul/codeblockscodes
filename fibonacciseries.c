#include <stdio.h>
int main()
{
    int a=0,b=1;
    int n;
    printf("Enter term of fibonacci series\n");
    scanf("%d",&n);
    n=n+1;
    for(int i=2; i<=n; i++)
    {
        a=a+b;
        b=a-b;
        printf("%d\t",b);
    }
    return 0;
}
