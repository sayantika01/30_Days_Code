#include<stdio.h>
#include<string.h>
int main(){
    char a[50],b[50],i;
    printf("Enter the 1st string: ");
    gets(a);
    printf("Enter the 2nd string: ");
    gets(b);
   // int l=strlen(a);
    int length=strlen(a)+strlen(b);
    char c[length];
    int p=0;
    for(i=0;i<l;i++){
        if(i<strlen(a)){
            c[i]=a[i];
        }
        else{
            c[i]=b[p];
            p++;

        }
       
    }
     c[i]='\0';
        printf("The concatenated string is: %s",c);
    
    return 0;

}