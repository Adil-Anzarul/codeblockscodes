#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a String\n");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
    printf("The String to lower case is\n");
    puts(str);
    return 0;
}
