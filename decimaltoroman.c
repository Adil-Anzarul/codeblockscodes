#include<stdio.h>
 main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Roman numerical:   ");
    while(n!=0)
    {
        if(n>1000)
        {
            printf("m");
            n=n-1000;
        }
        else if(n>900)
        {

            printf("cm");
            n=n-900;
        }
        else if(n>=500)
        {

            printf("d");
            n=n-500;
        }
        else if(n>=400)
        {

            printf("cd");
            n=n-400;
        }
        else if(n>=100)
        {

            printf("c");
            n=n-100;
        }
        else if(n>=90)
        {

            printf("xc");
            n=n-90;
        }
        else if(n>=50)
        {

            printf("l");
            n=n-50;
        }
        else if(n>=40)
        {

            printf("xl");
            n=n-40;
        }
        else if(n>=10)
        {

            printf("x");
            n=n-10;
        }
        else if(n>=9)
        {
            printf("ix");
            n=n-9;
        }
        else if(n>=5)
        {
            printf("v");
            n=n-5;
        }
        else if(n>=4)
        {

            printf("iv");
            n=n-4;
        }
        else if(n>=1)
        {

            printf("i");
            n=n-1;
        }
    }
return 100;
}
