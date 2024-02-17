#include<stdio.h>
#include<string.h>
struct DOB{
    int day;
    int month;
    int year;
};
struct student{
    int Roll;
    char names[20];
    struct DOB date;
    char phone_number[10];
};
int main()
{
    int n,i;
    struct student s1;
//Reading students,s details   
        printf("\nEnter the details of 1st student: ");
        printf("\n Roll number: ");
        scanf("%d",&s1.Roll);
        printf("\n Name: ");
        scanf("%s",s1.names);
        printf("\n Date of birth: ");
        scanf("%d %d %d",&s1.date.day,&s1.date.month,&s1.date.year);
        printf("\n Contact number: ");
        scanf("%s",s1.phone_number);
//Displaying details of a student
    printf("The details of the students:\n");
        printf("\nThe details of %dth student: ",i+1);
        printf("\n Roll number:%d ",s1.Roll);
        printf("\n Name:%s ",s1.names);
        printf("\n Date of Birth:%d/%d/%d ",s1.date.day,s1.date.month,s1.date.year);
        printf("\n Contact number:%s ",s1.phone_number);
    
    return 0;
}