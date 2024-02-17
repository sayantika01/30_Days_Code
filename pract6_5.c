#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d",&m);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d",&n);

    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    int flag=0,flag2=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j && a[i][j]!=0){
                flag=1;
                break;
            }
            else if(j==0 && a[i][j]!=0){
                flag=1;
                break;
            }
            else if(i==n-1 && a[i][j]!=0){
                flag=1;
                break;
            }
            else if(j==0 && a[i][j]!=0){
                flag2=1;
                break;
            }
            else if(i==n-1 && a[i][j]!=0){
                flag2=1;
                break;
            }
        }
    }
        if (flag=+0)
            printf("Upper traingular matrix");
        else if(flag==1)
            printf("not a upper traingular matrix");
        else if(flag2==0)
            printf("lower traingular matrix");
        else
            printf("lower traingular matrix");



    /*int flag=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j && a[i][j]!=0){
                flag=1;
                break;
            }
            
        }
    }
        if (flag=0){
        printf("lower traingular matrix");
        break;
        }
        else{
            printf("not a lower traingular matrix");
            break;
        }*/
        
        
    return 0;
}