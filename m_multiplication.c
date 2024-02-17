#include<stdio.h>
#include<stdlib.h>

int **mul(int r,int c){

    int **m=(int **)malloc(r* sizeof(int*));

    for(int i=0;i<r;i++){
        m[i]=(int *)malloc(c* sizeof(int));
    }

return m;
}

void display(int **m,int r,int c){

    for(int i=0;i<r;i++){

        for(int j=0;j<c;j++){

            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}

void multiplication(int **a,int **b,int **c, int m,int n){
    
    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            c[i][j]=0;
            for(int k=0;k<n;k++){
                
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}
int main(){

    int m,n;

    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("\nEnter the number of columns:");
    scanf("%d",&n);
    
    int a[m][n], b[m][n];
    int c[m][n]; // product matrix
    int i,j,k;

    printf("The 1st matrix:\n");

    for(i=0;i<m;i++){

        for(j=0;j<n;j++){

            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe 2nd matrix:\n");

    for(i=0;i<m;i++){

        for(j=0;j<n;j++){

            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
int **m1, **m2, **result;
    m1 = mul(m, n);
    m2 = mul(m, n);
    
    result=mul(m,n);
display(m1,m,n);
display(m2,m,n); 
multiplication(m1,m2,result,m,n);  
display(result,m,n);
    return 0;

}