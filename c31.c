// convert the lower case characters of a string into upper case.
#include<stdio.h>
int main()
{
    char str[20],i;
    printf("Enter the string: ");
    gets(str);
    char upper_str[30];
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
            upper_str[i]=str[i]-32;
        else
            upper_str[i]=str[i];
        i++;
    }
    upper_str[i]='\0';
    printf("the uppercase of the string is: ");
    puts(upper_str);
    return 0;
}