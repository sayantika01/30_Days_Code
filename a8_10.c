#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
int a[n];
int b[n];
printf("Enter the array elememts: ");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
b[i]=-1;
}
int c=1;

for(i=0;i<n;i++){
    int c=1;
    for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
            c++;
            b[j]=0;
        }

    }
    
    if(b[i]!=0){
        b[i]=c;
    }
}
printf("The frequencies of all the elements:\n ");
for(i=0;i<n;i++){
    if(b[i]!=0){
    printf("\n%d occurs %d times",a[i],b[i]);
    }
}
    return 0;
}