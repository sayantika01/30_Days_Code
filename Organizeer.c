#include<stdio.h>
typedef struct student{
    char *a;
}stu;

int main(){
    struct student stu={"hi"};
    //stu=;
    printf("%s",stu.a);
    return 0;
}