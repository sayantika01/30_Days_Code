#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    int *c=&a;
    int *d=&b;
    if(*c>*d)
    printf("%d",*c);
    else
    printf("%d",*d);
    return 0;
}