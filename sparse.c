#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("\nEnter the number od columns: ");
    scanf("%d",&n);

    int a[m][n];
    int i,j;
    printf("Enter the elements of the array: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    /*________________Sparse of a matrix_________________*/
printf("\nFor sparse of a matrix: ");

int s=0,ns=0;
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if(a[i][j]==0){
            s++;
        }
        else{
            ns++;
        }
    }
}
if(s>=ns){
    printf("\nSparse");   
}
else{
    printf("\nNot Sparse");
}
    return 0;
}