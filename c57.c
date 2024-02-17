//To perform Push, Pop, and Peek operations on a stack
#include<stdio.h>
#define MAX 5

class STACK{
    private:
        int size;
        int a[MAX];
        int top;
    public:
        STACK(){
            top=-1;
        }
        bool isEmpty(){
            if(top==-1)
                return true;
            return false;
        }
        bool isFull(){
            if(top==MAX-1)
                return true;
            return false;
        }
        void push(int n){
            if(isFull()){
                printf("Stack Overflow\n");
            }
            else{
                a[top+1]=n;
                top++l;
            }
        }
        void push(int n){
            if(isEmpty()){
                printf("Stack Underflow\n");
            }
            else{
                top=top-1;
                printf("Popped: %d\n",<<a[top+1]);
            }
        }
        int peek(){
            return top;
        }
        void display(){
            for(i=peek();i>=0;i++){
                printf("%d\n",a[i]);
            }
        }
};
int main(){
    STACK s;
    printf("________MENU________\n");
    printf("1.PUSH\n");
    printf("2.POP\n");
    printf("3.PEEK\n");
    printf("4.DISPLAY\n");
    printf("5.EXIT\n");

    int ch;
    do{
    printf("Enter the choice: ");;
    scanf("%d",&ch);
    switch (ch){
        case 1: printf("Enter the element to be pushed: \n");
                int x;
                scanf("%d",&x);
                s.push(x);
                break;
        case 2: s.pop();
                break;
        case 3: printf("Top Element: \n"<<s.peek());
                break;
        case 4: printf("STACK: \n");
                s.display(x);
                break;
        case 5: printf("EXITED\n");
                break;
        default: printf("INVALID\n");
        }
    }
    while(ch!=5);
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>
// #define MAX 5 // Altering this value changes size of stack created
// int st[MAX], top = -1;
// void push(int st[], int val);
// int pop(int st[]);
// int peek(int st[]);
// void display(int st[]);
// int main(int argc, char *argv[])
// {
//     int val, option;
//     do
//     {
//         printf("\n *****MAIN MENU*****");
//         printf("\n 1. PUSH");
//         printf("\n 2. POP");
//         printf("\n 3. PEEK");
//         printf("\n 4. DISPLAY");
//         printf("\n 5. EXIT");
//         printf("\n Enter your option: ");
//         scanf("%d", &option);
//         switch (option)
//         {
//         case 1:
//             printf("\n Enter the number to be pushed on stack: ");
//             scanf("%d", &val);
//             push(st, val);
//             break;
//         case 2:
//             val = pop(st);
//             if (val != -1)
//                 printf("\n The value deleted from stack is: %d", val);
//             break;
//         case 3:
//             val = peek(st);
//             if (val != -1)
//                 printf("\n The value stored at top of stack is: %d", val);
//             break;
//         case 4:
//             display(st);
//             break;
//         }
//     } while (option != 5);
//     return 0;
// }
// void push(int st[], int val)
// {
//     if (top == MAX - 1)
//     {
//         printf("\n STACK OVERFLOW");
//     }
//     else
//     {
//         top++;
//         st[top] = val;
//     }
// }
// int pop(int st[])
// {
//     int val;
//     if (top == -1)
//     {
//         printf("\n STACK UNDERFLOW");
//         return -1;
//     }
//     else
//     {
//         val = st[top];
//         top--;
//         return val;
//     }
// }
// void display(int st[])
// {
//     int i;
//     if (top == -1)
//         printf("\n STACK IS EMPTY");
//     else
//     {
//         for (i = top; i >= 0; i--)
//             printf("\n %d", st[i]);
//         printf("\n"); // Added for formatting purposes
//     }
// }
// int peek(int st[])
// {
//     if (top == -1)
//     {
//         printf("\n STACK IS EMPTY");
//         return -1;
//     }
//     else
//         return (st[top]);
// }
