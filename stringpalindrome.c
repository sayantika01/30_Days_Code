#include <stdio.h>
#include<string.h>
int main() {
    char a[100];
    gets(a);
    int l=strlen(a);
    int p=l-1;
    int i;
    int f=0;
    for(i=0;i<l;i++){
        
      if ( a[i]!=a[p]){
          f=1;
          break;
      }
        p--;
    }
    a[i]='\0';
    if(f==0)
    printf("palindrome");
    else
    printf("not");
   

return 0;
}