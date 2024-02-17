#include<stdio.h>
int search(int a[],int n,int x){
    int f=0;
    for(i=0;i<=n;i++){
        if(a[i]==x){
            printf("index=%d",i);
            f=1;
            break;
        }
    }
}


int main(){
    int i,n,x;
    printf("Enter the range of array: ");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d",&x);


    printf("%d",search)

    //f---->(flag variable)It changes when it satisfies the condition and completes executing the statement.
    //Suppose here we initialised f=0, now as the if statement gets satisfied then the value changes as f=1.
    
    return 0;
}