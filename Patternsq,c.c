#include<stdio.h>
int main()
{
    printf("Pattern1 is as follow--------\n\n\n");
    for(int i=1; i<=10; i++)
    {
        for(int j=1; j<=10; j++)
        {
            if(i==1 || i==10)
            {
                printf(" *");
            }
            else if(j==1 || j==10)
            {
                printf(" *");
            }
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("\n\n\n\nPattern2 is as follow--------\n\n");
    for(int i=1; i<=10; i++)
    {
        for(int j=1; j<=10; j++)
        {
            if(i==1 || i==2  ||i==9 || i==10)
            {
                printf(" *");
            }
            else if(j==1 || j==2 ||j==9 || j==10)
            {
                printf(" *");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n\n\n\nPattern3 is as follow--------\n\n");
    for(int i=1; i<=10; i++)
    {
        for(int j=1; j<=10; j++)
        {
            if(i==1 || i==2 ||i==5 || i==6 ||i==9 || i==10)
            {
                printf(" *");
            }
            else if(j==1 || j==2 || j==5 || j==6 ||j==9 || j==10)
            {
                printf(" *");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
