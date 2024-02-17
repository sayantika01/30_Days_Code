// //Student's details using structure using pointer to function
// #include<stdio.h>
// #include<string.h> 
// #include<stdlib.h> 
// struct student
// {
//     int Roll;
//     char *names;
//     char *DOB;
//     char *phone_number;
// };
// void display(struct student *ps1)
// {
//         printf("_____DETAILS OF STUDENTS______\n");
//         printf("\n\n Roll number:%d ",ps1->Roll);
//         printf("\n\n Name:%s ",ps1->names);
//         printf("\n\n Date of Birth:%s ",ps1->DOB);
//         printf("\n\n Contact number:%s ",ps1->phone_number);
// }
// int main()
// {
//     struct student *ps1;
// //Reading students,s details   
//     ps1= (struct student *)malloc(sizeof(struct student));
//     printf("\nEnter the details of 1st student: ");
//     printf("\n Roll number: ");
//     scanf("%d",&ps1->Roll);
//     printf("\n Name: ");
//    //scanf("%[^\n]%*c",&ps1->names);
//     //gets(&ps1->names);
//     scanf("%s",ps1->names);
//     printf("\n Date of birth: ");
//     scanf("%s",ps1->DOB);
//     printf("\n Contact number: ");
//     scanf("%s",ps1->phone_number);

// //Displaying details of a student
//     display(ps1);
    
    
    
//     return 0;
// }



// #include<stdio.h>
// #include<string.h> 
// #include<stdlib.h> 

// struct student
// {
//     int Roll;
//     char names[100];
//     char DOB[100];
//     char phone_number[100];
// };

// void display(struct student *ps1)
// {
//     printf("____DETAILS OF STUDENTS_____\n");
//     printf("\n\n Roll number:%d ", ps1->Roll);
//     printf("\n\n Name:%s ", ps1->names);
//     printf("\n\n Date of Birth:%s ", ps1->DOB);
//     printf("\n\n Contact number:%s ", ps1->phone_number);
// }

// int main()
// {
//     struct student *ps1;

//     // Reading student's details   
//     ps1 = (struct student *)malloc(sizeof(struct student));
//     if (ps1 == NULL) {
//         printf("Memory allocation failed.");
//         return 1;
//     }

//     printf("\nEnter the details of 1st student: ");
//     printf("\n Roll number: ");
//     scanf("%d", &ps1->Roll);
//     printf("\n Name: ");
//     scanf("%99s", ps1->names);
//     printf("\n Date of birth: ");
//     scanf("%99s", ps1->DOB);
//     printf("\n Contact number: ");
//     scanf("%99s", ps1->phone_number);

//     // Displaying details of a student
//     display(ps1);

//     // Free allocated memory
//     free(ps1);

//     return 0;
// }


//Student's details using structure using pointer to function
#include<stdio.h>
#include<string.h> 
#include<stdlib.h> 
struct student
{
    int Roll;
    char names[100];
    char DOB[100];
    char phone_number[100];
};
void display(struct student *ps1)
{
        printf("_____DETAILS OF STUDENTS______\n");
        printf("\n\n Roll number:%d ",ps1->Roll);
        printf("\n\n Name:%s ",ps1->names);
        printf("\n\n Date of Birth:%s ",ps1->DOB);
        printf("\n\n Contact number:%s ",ps1->phone_number);
}
int main()
{
    struct student *ps1;
//Reading students,s details   
    ps1= (struct student *)malloc(sizeof(struct student));
    // if(ps1==NULL)
    // {
    //     printf("Memory allocation failed.");
    //     return 1;
    // }
    printf("\nEnter the details of 1st student: ");
    printf("\n Roll number: ");
    scanf("%d",&ps1->Roll);
    
    while(getchar()!='\n');
    printf("\n Name: ");
    scanf("%[^\n]",&ps1->names);
    //gets(&ps1->names);
    //scanf("%s",ps1->names);
    printf("\n Date of birth: ");
    scanf("%s",ps1->DOB);
    printf("\n Contact number: ");
    scanf("%s",ps1->phone_number);

//Displaying details of a student
    display(ps1);
    
    
    
    return 0;
}