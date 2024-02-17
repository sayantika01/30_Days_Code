//to read, display, add, subtract two distance in metre and kilometre
#include<stdio.h>
typedef struct Distance
{
    int kms;
    int ms;
    

}dist;
int main()
{
    dist d1,d2,d3,d4;
    // dist add_Distance(dist,dist);
    // dist subtract_Distance(dist,dist);
    int c;
    do
    {
        printf("\nMenu: ");
        printf("\n1.Reading the distance:\n "); 
        printf("\n2.Displaying the distance:\n "); 
        printf("\n3.Adding the distance:\n "); 
        printf("\n4.Subtracting the distance:\n "); 
        printf("\n5.Exit");

        printf("\nEnter your choice: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1: printf("Readiing the distance:\n");
                    printf("Enter the metre and kilometre of 1st distance: ");
                    scanf("%d %d",&d1.kms,&d1.ms);
                    printf("\nEnter the metre and kilometre of 2nd distance: ");
                    scanf("%d %d",&d2.kms,&d2.ms);
                    break;
            case 2: printf("Displaying the distance:\n");
                    printf("1st distance is %dkm %dm: ",d1.kms,d1.ms);
                    printf("\n2nd distance is %dkm %dm: ",d2.kms,d2.ms);
                    break;
            case 3: printf("Adding the distance:\n");
                    d3.kms=d1.kms+d2.kms;
                    d3.ms=d1.ms+d2.ms;
                    printf("The sum is:%dkm %dm ",d3.kms, d3.ms);
                    break;
            case 4: printf("Subtraction of distance: ");
                    d4.kms=d1.kms-d2.kms;
                    d4.ms=d1.ms-d2.ms;
                    printf("The subtraction is:%dkm %dm ",d4.kms, d4.ms);
                    break;   
        }   
    } while (c!=5);
    
    return 0;
}