#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[10];
    int age;
    float marks;
};
struct student s={1,"ABC",20,100};
int main(){
    //struct student *ptr=&s;
    s.roll,1; 
    strcpy(s.name,"ABC"); 
    s.age=20; 
    s.marks=100; 
    printf("\nRoll number of the stydent is :%d",s.roll);
    printf("\nName of the student is :%s",s.name);
    printf("\nAge of the student is :%d",s.age);
    printf("\nMarks of the student is :%f",s.marks);
    return 0;
}