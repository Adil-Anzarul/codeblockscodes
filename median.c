/*  to find median among three number*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number.\n");
    scanf("%d\n %d\n %d",&a,&b,&c);
    int median;
   if(a>b && a>c)
   {
       if(b>c)
        median=b;
       else
        median=c;
   }
   else if(b>c && b>a)
   {
       if(a>c)
        median=a;
       else
        median=c;
   }
   else if(c>a && c>b)
   {
       if(a>b)
        median=a;
       else
        median=b;
   }
   printf("median = %d",median);
   return 0;
}

