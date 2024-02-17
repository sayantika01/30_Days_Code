#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack *next;
};
struct stack *top=NULL;
struct stack *push(struct stack *, int);
struct stack *display(struct stack *);
struct stack *pop(struct stack *);
int peek(struct stack *);
struct stack *push(struct stack *top,int value)
{
    struct stack *ptr;
    ptr=(struct stack*)malloc(sizeof(struct stack));
    ptr->data=value;
    if(top==NULL)
    {
        ptr->next=NULL;
        top=ptr;
    }
    else
    {
        ptr->next=top;
        top=ptr;
    }
    return top;
}
struct stack *pop(struct stack *top)
{
    struct stack *ptr;
    ptr=top;
    if(top==NULL)
    printf("\n STACK OVERFLOW");
    else{
        top=top->next;
        printf("\n The value being deleted is: %d",ptr->data);
        free(ptr);
    }
    return top;
}
int peek(struct stack *top)
{
    if(top==NULL)
    return -1;
    else
    return top->data;
}
struct stack *display(struct stack *top)
{
    struct stack *ptr;
    ptr=top;
    if(top==NULL)
    printf("\n STACK IS EMPTY");
    else{
        while(ptr!=NULL)
        {
            printf("\n %d",ptr->data);
            ptr=ptr->next;
        }
    }
    return top;
}
int main(int argc, char* argv)
{
    int value, option;
    do{
        printf("_____MENU_____");
        printf("\n1.PUSH"); 
        printf("\n2.POP"); 
        printf("\n3.PEEK"); 
        printf("\n4.DISPLAY");  
        printf("\n5.EXIT");  
        printf("\nEnter The choice: ");
        scanf("%d",&option);

        switch(option){
            case 1: printf("Enter the value to be inserted: ");
                    scanf("%d",&value);
                    top=push(top,value);
                    break;
            case 2: top=pop(top);
                    break;
            case 3: value=peek(top);
                    if(value!=-1)
                    printf("The peek value is: %d",value);
                    else
                    printf("The stack is empty");
                    break;
            case 4: top=display(top);
                    break;
            case 5: printf("The stack EXITS");
                    break;
        }  
    }
    while(option!=5);
    return 0;
}