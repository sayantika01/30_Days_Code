//whether a string is a palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("Enter the string: ");
    gets(s);
    int i=0,j,l;
    l=strlen(s);
    int f=0;
    for(i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-i-1])
            f=1;
    }

    if(f==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not");
    }
    // while(s[i]!='\0')
    // {
    //     l++;
    //     i++;
    // }
    // j=l-1;
    // while(i<=l/2)
    // {
    //     if(s[i]==s[j])
    //     {
    //         i++;
    //         j--;
    //     }
    //     else
    //         break;
    
    // }
    // if(i>=j)
    //     printf("Palindromic string");
    // else
    //     printf("Not Palindromic string");
    
    
    return 0;
}