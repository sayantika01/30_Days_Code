//o insert a string in the main text.
#include <stdio.h>
#include <string.h>
#include<conio.h>
int main()
{
    char text[100], str[20], ins_text[100];
    int i=0, j=0, k=0,pos;
    printf("\n Enter the main text : ");
    gets(text);
    printf("\n Enter the string to be inserted : ");
    gets(str);
    printf("\n Enter the position at which the string has to be inserted:");
    scanf("%d", &pos);
    // while(text[i]!='\0')
    // {
    //     //int strlen(ins_text)= strlen(text)+strlen(str);
    //     if(i==pos)
    //     {
    //         while(str[k]!='\0')
    //         {
    //             ins_text[j]=str[k];
    //             j++;
    //             k++;
               
    //         }
    //         i++;
    //     }
    //     else
    //     {
            
    //         ins_text[j]=text[i];
    //         j++;
    //         i++;
    //     }
        
    // }
    while (i < pos)
    {
        ins_text[j] = text[i];
        i++;
        j++;
    }
    // Copy the string to be inserted into ins_text
    k = 0;
    while (str[k] != '\0')
    {
        ins_text[j] = str[k];
        j++;
        k++;
    }
    // Copy the remaining original text into ins_text
    while (text[i] != '\0')
    {
        ins_text[j] = text[i];
        i++;
        j++;
    }
ins_text[j]='\0';
printf("\n The new string is : ");
puts(ins_text);

return 0;
}