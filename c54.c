// //to create a circular doubly linked list and perform insertions and deletions at the beginning and end of the list.
#include <stdio.h>
#include <conio.h>
//#include <malloc.h>
#include<stdlib.h>
struct node
{
    struct node *next;
    int data;
    struct node *prev;
};
struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_list(struct node *);
int main()
{
    int option;
    do
    {
        printf("\n\n *****MAIN MENU *****");
        printf("\n 1: Create a list");
        printf("\n 2: Display the list");
        printf("\n 3: Add a node at the beginning");
        printf("\n 4: Add a node at the end");
        printf("\n 5: Delete a node from the beginning");
        printf("\n 6: Delete a node from the end");
        printf("\n 7: Delete a given node");
        printf("\n 8: Delete the entire list");
        printf("\n 9: EXIT");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch(option)
        {
            case 1: start = create_ll(start);
                printf("\n CIRCULAR DOUBLY LINKED LIST CREATED");
                break;
            case 2: start = display(start);
                break;
            case 3: start = insert_beg(start);
                break;
            case 4: start = insert_end(start);
                break;
            case 5: start = delete_beg(start);
                break;
            case 6: start = delete_end(start);
                break;
            case 7: start = delete_node(start);
                break;
            case 8: start = delete_list(start);
                printf("\n CIRCULAR DOUBLY LINKED LIST DELETED");
                break;
        }
}
    while(option != 9);
return 0;
}

struct node *create_ll(struct node *start)
{
    struct node *new_node, *ptr;
    int num;
    printf("\n Enter -1 to end");
    printf("\n Enter the data : ");
    scanf("%d", &num);
    while(num != -1)
    {
        if(start == NULL)
        {
            new_node = (struct node*)malloc(sizeof(struct node));
            new_node -> prev = NULL;
            new_node -> data = num;
            new_node -> next = NULL;
            start = new_node;
        }
        else
        {
            ptr=start;
            new_node = (struct node*)malloc(sizeof(struct node));
            new_node->data=num;
            while(ptr->next!=NULL)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->prev=ptr;
            new_node->next=NULL;
        }
        printf("\n Enter the data : ");
        scanf("%d", &num);
    }
    return start;
}
struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while(ptr -> next != start)
    {
        printf("\t %d", ptr -> data);
        ptr = ptr -> next;
    }
    printf("\t %d", ptr -> data);
    return start;
}
struct node *insert_beg(struct node *start)
{
    struct node *new_node, *ptr;
    int num;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node-> data = num;
    ptr = start;
    while(ptr -> next != start)
        ptr = ptr -> next;
    new_node -> prev = ptr;
    ptr -> next = new_node;
    new_node -> next = start;
    start -> prev = new_node;
    start = new_node;
    return start;
}
struct node *insert_end(struct node *start)
{
    struct node *ptr, *new_node;
    int num;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    ptr = start;
    while(ptr -> next != start)
        ptr = ptr -> next;
    ptr -> next = new_node;
    new_node -> prev = ptr;
    new_node -> next = start;
    start-> prev = new_node;
    return start;
}
struct node *delete_beg(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while(ptr -> next != start)
        ptr = ptr -> next;
    ptr -> next = start -> next;
    ptr = start;
    start=start->next;
    start->prev=ptr;
    //free(temp);
    free(ptr);
    return start;
}
struct node *delete_end(struct node *start)
{
    struct node *ptr;
    ptr=start;
    while(ptr -> next != start)
        ptr = ptr -> next;
    ptr -> prev -> next = start;
    start -> prev = ptr -> prev;
    free(ptr);
    return start;
}
struct node *delete_node(struct node *start)
{
    struct node *ptr;
    int val;
    printf("\n Enter the value of the node which has to be deleted : ");
    scanf("%d", &val);
    ptr = start;
    if(ptr -> data == val)
    {
        start = delete_beg(start);
        return start;
    }
    else
    {
        while(ptr -> data != val)
            ptr = ptr -> next;
        ptr -> prev -> next = ptr -> next;
        ptr -> next -> prev = ptr -> prev;
        free(ptr);
        return start;
    }
}
struct node *delete_list(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while(ptr -> next != start)
        start = delete_end(start);
    free(start);
    return start;
}



// #include <stdio.h>
// #include <stdlib.h>

// // Node structure for circular doubly linked list
// struct Node {
//     int data;
//     struct Node *prev;
//     struct Node *next;
// };

// // Function to insert a node at the beginning of the list
// struct Node *insertAtBeginning(struct Node *head, int data) {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->prev = NULL;
//     newNode->next = NULL;

//     if (head == NULL) {
//         head = newNode;
//         newNode->prev = newNode;
//         newNode->next = newNode;
//     } else {
//         newNode->next = head;
//         newNode->prev = head->prev;
//         head->prev->next = newNode;
//         head->prev = newNode;
//         head = newNode;
//     }

//     return head;
// }

// // Function to insert a node at the end of the list
// struct Node *insertAtEnd(struct Node *head, int data) {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->prev = NULL;
//     newNode->next = NULL;

//     if (head == NULL) {
//         head = newNode;
//         newNode->prev = newNode;
//         newNode->next = newNode;
//     } else {
//         newNode->next = head;
//         newNode->prev = head->prev;
//         head->prev->next = newNode;
//         head->prev = newNode;
//     }

//     return head;
// }

// // Function to delete the first node
// struct Node *deleteFromBeginning(struct Node *head) {
//     if (head == NULL) {
//         printf("List is empty\n");
//         return NULL;
//     }

//     struct Node *temp = head;
//     if (head->next == head) {
//         free(head);
//         return NULL;
//     }

//     head = head->next;
//     head->prev = temp->prev;
//     temp->prev->next = head;
//     free(temp);

//     return head;
// }

// // Function to delete the last node
// struct Node *deleteFromEnd(struct Node *head) {
//     if (head == NULL) {
//         printf("List is empty\n");
//         return NULL;
//     }

//     struct Node *temp = head->prev;
//     if (head->next == head) {
//         free(head);
//         return NULL;
//     }

//     temp->prev->next = head;
//     head->prev = temp->prev;
//     free(temp);

//     return head;
// }

// // Function to display the circular doubly linked list
// void display(struct Node *head) {
//     if (head == NULL) {
//         printf("List is empty\n");
//         return;
//     }

//     struct Node *current = head;
//     do {
//         printf("%d <-> ", current->data);
//         current = current->next;
//     } while (current != head);
//     printf("\n");
// }

// int main() {
//     struct Node *head = NULL;
//     int choice, data;

//     do {
//         printf("Menu:\n");
//         printf("1. Insert at the beginning\n");
//         printf("2. Insert at the end\n");
//         printf("3. Delete from the beginning\n");
//         printf("4. Delete from the end\n");
//         printf("5. Display\n");
//         printf("6. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter data: ");
//                 scanf("%d", &data);
//                 head = insertAtBeginning(head, data);
//                 break;
//             case 2:
//                 printf("Enter data: ");
//                 scanf("%d", &data);
//                 head = insertAtEnd(head, data);
//                 break;
//             case 3:
//                 head = deleteFromBeginning(head);
//                 break;
//             case 4:
//                 head = deleteFromEnd(head);
//                 break;
//             case 5:
//                 display(head);
//                 break;
//             case 6:
//                 printf("Exiting...\n");
//                 break;
//             default:
//                 printf("Invalid choice\n");
//         }
//     } while (choice != 6);

//     // Free memory before exiting
//     while (head != NULL) {
//         head = deleteFromEnd(head);
//     }

//     return 0;
// }
