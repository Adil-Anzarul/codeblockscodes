/* This program is gonna trim the trailing and leading spaces of a String*/
#include<stdio.h>
#include<string.h>
void trim_h(char * p)
{
    int posn=0;
    for(int i=0;*(p+i)==' ';i++)
    {
        posn+=1;
    }
    for(int i=0;*(p+i)!='\0';i++)
    {
      *(p+i)=*(p+i+posn);
    }

}
int main2()
{
    printf("Enter a String\n");
    char s[100];
    gets(s);
    trim_h(s);
    char r[100];
    strcpy(r,strrev(s));
    trim_h(r);
    strcpy(s,strrev(r));
    printf("The trimmed String is :\n");
    puts(s);


    /*printf("\n");
    puts(strrev(s));*/
   return 100;
}
