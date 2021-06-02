int main()
{
int v=76;
int *p1;
int **p2;//double pointer
int ***p3;
p1=&v;
p2=&p1;
p3=&p2;
printf("The value of v=%d\n",v);
printf("The value of v=%d\n",*p1);
printf("The value of v=%d\n",**p2);
printf("The value of v=%d\n",***p3);
return 0;
}
