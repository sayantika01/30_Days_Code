// // to reverse a list of given numbers
// #include<stdio.h>
// int stack[10];
// int top=-1;
// int pop()
// {
//     return (stack[top--]);
// }

// void push(int v)
// {
//     stack[++top]=v;
// }

// int main()
// {
//     int v, n,i;
//     printf("\nEnter the size of array: ");
//     scanf("%d",&n);
//     int a[n];
//     printf("\nEnter the elements in the list: ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);

//     }
//     for(i=0;i<n;i++)
//     {
//         v=pop();
//         a[i]=v;
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("\n%d",a[i]);

//     }
//     return 0;

// }


#include <stdio.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

int pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        printf("Stack is empty!\n");
        return -1; // Return a sentinel value to indicate an empty stack or error
    }
}

void push(int v) {
    if (top < MAX_SIZE - 1) {
        stack[++top] = v;
    } else {
        printf("Stack is full!\n");
    }
}

int main() {
    int n, i;
    printf("Enter the size of the array (up to %d): ", MAX_SIZE);
    scanf("%d", &n);
    
    if (n > MAX_SIZE) {
        printf("Array size exceeds maximum limit!\n");
        return 1; // Return an error code
    }
    
    int a[MAX_SIZE];
    printf("Enter %d elements in the list: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        push(a[i]); // Push each element onto the stack
    }

    for (i = 0; i < n; i++) {
        a[i] = pop(); // Pop elements from the stack back into the array
    }

    printf("Reversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
