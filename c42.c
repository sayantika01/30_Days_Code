// //to concatenate two strings using pointer
// #include<stdio.h>
// int main()
// {
//     char s1[20];
//     printf("Enter the 1st string: ");
//     gets(s1);
    
//     char s2[20];
//     printf("Enter the 2nd string: ");
//     gets(s2);

//     int n=strlen(s1)+strlen(s2)
//     char concS[n];
//     char *ps1,*ps2,*pconcS ;

//     *ps1=s1;
//     *ps2=s2;   
//     *pconcS=concS;

//     //concating both string

//     while (*ps1 != '\0') {
//         *pconcS = *ps1;
//         ps1++;
//         pconcS++;
//     }
//     *pconcS = '\0';

//     while (*ps2 != '\0') {
//         *pconcS = *ps2;
//         ps2++;
//         pconcS++;
//     }
//     *pconcS = '\0';

//     //printing the concatenate string

//     char *resultstr = pconcS;
//     while (*resultstr != '\0') {
//         printf("%c", *resultstr);
//         resultstr++;
//     }
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     char str1[100], str2[100], copy_str[200];
//     char *pstr1, *pstr2, *pcopy_str;

//     pstr1 = str1;
//     pstr2 = str2;
//     pcopy_str = copy_str;

//     printf("\n Enter the first string : ");
//     gets(str1);
//     printf("\n Enter the second string : ");
//     gets(str2);

//     while(*pstr1 != '\0')
//     {
//         *pcopy_str = *pstr1;
//         pcopy_str++, pstr1++;
//     }
//     while(*pstr2 != '\0')
//     {
//         *pcopy_str = *pstr2;
//         pcopy_str++, pstr2++;
//     }
//     *pcopy_str = '\0';

//     printf("\n The concatenated text is : ");
//     while(*pcopy_str != '\0')
//     {
//         printf("%c", *pcopy_str);
//         pcopy_str++;
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    char str1[100]; // Assuming the first string won't exceed 100 characters
    char str2[100]; // Assuming the second string won't exceed 100 characters

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Concatenate the strings using pointers and a for loop
    char *str1ptr= str1;
    while (*str1ptr != '\0') {
        str1ptr++;
    }

    char *str2Ptr = str2;
    while (*str2Ptr != '\0') {
        *str1ptr = *str2Ptr;
        str1ptr++;
        str2Ptr++;
    }
    *str1ptr = '\0'; // Null-terminate the concatenated string

    printf("Concatenated string: %s\n", str1);

    return 0;
}
