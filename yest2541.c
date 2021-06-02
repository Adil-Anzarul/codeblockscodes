#include<stdio.h>
void calculation(float*,float*,float*c);
void main()
{float addition;
   int a=10;
   int b=12;

    calculation(&a,&b,&addition);


    printf("Addition = %f",addition);



}
void calculation(float *a,float *b,float*c)
{
  *c = *a  + *b;
}
