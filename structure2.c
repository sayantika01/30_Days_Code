#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    int age;
    char name[100];
    float marks;
};

int main(){
    struct student s[5];
    strcpy(s[0].name,"ABS");
    s[0].age=20;
    s[0].roll=1;
    s[0].marks=100;

    strcpy(s[1].name,"ABx");
    s[1].age=20;
    s[1].roll=2;
    s[1].marks=100;

    strcpy(s[2].name,"SAB");
    s[2].age=20;
    s[2].roll=3;
    s[2].marks=99;

    strcpy(s[3].name,"AFS");
    s[3].age=20;
    s[3].roll=4;
    s[3].marks=80;

    strcpy(s[4].name,"WER");
    s[4].age=20;
    s[4].roll=5;
    s[4].marks=90;

    printf("\nThe details of the students are: \n");
    int i;
    /*for(i=0;i<5;i++){
        printf("\nName of the student is :%s\n",s[i].name);
        printf("\nAge of the student is :%d\n",s[i].age);
        printf("\nRoll number of the student is :%d\n",s[i].roll);
        printf("\nMarks of the student is :%f\n",s[i].marks);
    }*/
    for(i=0;i<5;i++){
        if(s[i].roll==2){
        printf("\nName of the student is :%s\n",s[i].name);
        printf("\nAge of the student is :%d\n",s[i].age);
        printf("\nRoll number of the student is :%d\n",s[i].roll);
        printf("\nMarks of the student is :%f\n",s[i].marks);
        }
        
    }
    return 0;
}