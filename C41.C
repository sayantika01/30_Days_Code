//to copy a string into another string using pointer.
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[20],cs[20];
//     printf("Enter the string: ");
//     gets(s);
//     char *ps, *pcs;
//     ps=s;
//     pcs=cs;
//     int i;
//     while(*ps!='\0')
//     {
//         *pcs=*ps;
//         pcs++; 
//         ps++; 
//     }
//     // for(i=0;ps[i]!='\0';i++)
//     // {
//     //     *pcs[i]=*ps[i];
//     // }
//     *pcs='\0';
//     char *result=cs;
//     while(*result!='\0')
//     {
//     printf("The copied string is: %s ",*result);
//     *result++;
//     //printf("%c",*pcs);

//     }
//     printf("\n");
    
//     return 0;
// }

#include <stdio.h>

int main() {
    // char source[] = "Hello, world!";
    char s[20];
    printf("Enter the string: ");
    gets(s);
    char copys[100]; // Assuming the destination buffer size

    // Copy the string using pointers and a for loop
    char *strP = s;
    char *copyP = copys;

    while (*strP != '\0') {
        *copyP = *strP;
        strP++;
        copyP++;
    }
    *copyP = '\0'; // Null-terminate the destination string

    // Print the copied string
    char *resultstr = copys;
    while (*resultstr != '\0') {
        printf("%c", *resultstr);
        resultstr++;
    }
    printf("\n");

    return 0;
}