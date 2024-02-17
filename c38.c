//To replace a pattern with another pattern in the text.
#include<stdio.h>
#include<conio.h>
int main(){
    char s[100],p[20],r[30],new_str[100];
    printf("Enter the string: ");
    gets(s);
    printf("Enter the pattern to be replaced: ");
    gets(p);
    printf("Enter the replacing pattern: ");
    gets(r);
    int i=0,j=0,k,copy_loop=0,rep_index=0,n=0;
    while(s[i]!='\0')
    {
        j=0,k=i;
        while(s[k]==p[j] && p[j]!='\0')
        {
            k++;
            j++;
        }
        if(p[j]=='\0')
        {
            copy_loop=k;
            while(r[rep_index] !='\0')
            {
                new_str[n] = r[rep_index];
                rep_index++;
                n++;
            }
        }
        new_str[n] = s[copy_loop];
        i++;
        copy_loop++;
        n++;
    }
    new_str[n]='\0';
    printf("\n The new string is : ");
    puts(new_str);
    getch();
    return 0;
}