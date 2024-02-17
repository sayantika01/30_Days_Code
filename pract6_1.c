#include<stdio.h>
int main(){
    int n,i,j,m;
    printf("Enter the row of an array: ");
    scanf("%d",&n);
    printf("Enter the coolumn of an array: ");
    scanf("%d",&m);
    int a[n][m],b[n][m];
    for(i=0;i<n;i++){
       for(j=0;j<m;j++){
        scanf("%d",&a[i][j]);
       }
       //printf("\n");
    }
    for(i=0;i<n;i++){
       for(j=0;j<m;j++){
        scanf("%d",&b[i][j]);
       }
       //printf("\n");
    }
    
        
    

     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%4d",a[i][j]-b[i][j]);
        }
        printf("\n");
    }
    return 0;
}