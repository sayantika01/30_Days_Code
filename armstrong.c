#include<stdio.h>
int main(){
    int r=0,s=0,p,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    p=n;
    while (n!=0)
    {
       r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }

    
    if (p==s)
    {
       printf("\nArmstrong");
    }
    else{
        printf("Not Armstrong");
    }
    printf("\n%d",s);
    
        
    return 0;
}