#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter a String\n");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
    printf("The value of String in upper case is\n");
    puts(str);
    return 0;
}
