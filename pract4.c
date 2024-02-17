#include<stdio.h>
#include<string.h>
int main(){
    char a[50],b[50];
    gets(a);
    int l=strlen(a);

    int j=l-1,i;
    for(i=0;i<l;i++){
        b[i]=a[j];
        j--;
    }
    b[i]='\0';
    printf("%s",b);
return 0;   
}