#include<stdio.h>
int main()
{
printf("---------THE SIZE OF VARIOUR DATATYPES ON MY ARCITECTURE IS -----------\n");
int a;
double b;
float f;
char c;
short d;
long e;
long long h;
printf("---->Size of int is %d.\n",sizeof(a));
printf("---->Size of double is %d.\n",sizeof(b));
printf("---->size of float is %d.\n",sizeof(f));
printf("---->Size of char is %d.\n",sizeof(c));
printf("---->Size of short is %d.\n",sizeof(d));
printf("---->Size of long is %d.\n",sizeof(e));
printf("---->Size of long long  is %d.\n",sizeof(h));
printf("-----------------------------------------------------------------------");
return 0;
}
