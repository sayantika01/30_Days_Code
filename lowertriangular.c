#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
int flag=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i][j]!=0){
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    printf(" Lower");
    else
    printf("NOt");
    return 0;
}