//Student's details using structure
#include<stdio.h>
#include<string.h>
struct student
{
    int Roll;
    char names[20];
    char DOB[20];
    char phone_number[10];
    int NRoll;
    char Nnames[20], NDOB[20],Nphone_number[10];
};
int main()
{
    int n,i;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct student s[n];
//Reading students,s details  
for(i=0;i<n;i++)
{ 
        printf("\nEnter the details of %dth student: ",i+1);
        printf("\n Roll number: ");
        scanf("%d",&s[i].Roll);
        printf("\n Name: ");
        scanf("%s",s[i].names);
        printf("\n Date of birth: ");
        scanf("%s",s[i].DOB);
        printf("\n Contact number: ");
        scanf("%s",s[i].phone_number);
}  
    printf("The details of the students:\n");
    for(i=0;i<n;i++)
    {
        printf("\nThe details of %dth student: ",i+1);
        printf("\n Roll number:%d ",s[i].Roll);
        printf("\n Name:%s ",s[i].names);
        printf("\n Date of Birth:%s ",s[i].DOB);
        printf("\n Contact number:%s ",s[i].phone_number);
    } 

//editting the deatils;
    int num;
    int NRoll=0;
    char Nnames[20], NDOB[20],Nphone_number[10];
    printf("Enter the number of the student whose details has to be updated:");
    scanf("%d",&num);
    

    
    if(num>=0 && num<n){
        //Nnames[20]=0, NDOB[20]=0,Nphone_number[10]=0;
        // s[num].Roll=NRoll;
        // strcpy(s[num].names,Nnames);
        // strcpy(s[num].DOB,NDOB);
        // strcpy(s[num].phone_number,Nphone_number);
        printf("\n New Roll number: ");
        scanf("%d",&s[num].NRoll);
        printf("\n New Name: ");
        scanf("%s",s[num].Nnames);
        printf("\n New Date of birth: ");
        scanf("%s",s[num].NDOB);
        printf("\n New Contact number: ");
        scanf("%s",s[num].Nphone_number);
    }
    
    s[num].Roll=NRoll;
    s[num].names=Nnames;
    s[num].DOB=NDOB;
    s[num].phone_number=Nphone_number;

    printf("The new details of the students:\n");
    for(i=0;i<n;i++)
    {
        printf("\nThe details of %dth student: ",i+1);
        printf("\n Roll number:%d ",s[i].Roll);
        printf("\n Name:%s ",s[i].names);
        printf("\n Date of Birth:%s ",s[i].DOB);
        printf("\n Contact number:%s ",s[i].phone_number);
    }



//Displaying details of a student
    
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// struct Student {
//     char name[50];
//     int age;
//     float gpa;
// };

// void display(struct Student students[], int n) {
//     printf("Student Information:\n");
//     for (int i = 0; i < n; i++) {
//         printf("Student %d:\n", i + 1);
//         printf("Name: %s\n", students[i].name);
//         printf("Age: %d\n", students[i].age);
//         printf("GPA: %.2f\n", students[i].gpa);
//         printf("--------------------\n");
//     }
// }

// int main() {
//     int n;
//     printf("Enter the number of students: ");
//     scanf("%d", &n);

//     struct Student students[n];

//     for (int i = 0; i < n; i++) {
//         printf("Enter details for Student %d:\n", i + 1);
//         printf("Name: ");
//         scanf("%s", students[i].name);
//         printf("Age: ");
//         scanf("%d", &students[i].age);
//         printf("GPA: ");
//         scanf("%f", &students[i].gpa);
//         printf("--------------------\n");
//     }

//     display(students, n);

//     int i;
//     printf("Enter the index of the student to edit (0 to %d): ", n - 1);
//     scanf("%d", &i);

//     if (i >= 0 && i < n) {
//         printf("Enter new details for Student %d:\n", i + 1);
//         printf("Name: ");
//         scanf("%s", students[i].name);
//         printf("Age: ");
//         scanf("%d", &students[i].age);
//         printf("GPA: ");
//         scanf("%f", &students[i].gpa);

//         display(students, n);
//     } else {
//         printf("Invalid index.\n");
//     }

//     return 0;
// }