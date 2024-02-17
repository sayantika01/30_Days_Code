#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter the number of elements:");
    scanf("%d", &n);
    int a[n];
    int i;

    // Array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //Number formation;
    float s=0;
    for(i=0;i<n;i++){
        // s=s+(a[i]*pow(10,n-1));
        // n--;
        //s=s*10+a[i];
        s=s+(a[i]*pow(10,n-i-1));
       // n--;
    }
    // i=0;
    // while(i<n){
    //     s+=a[i]*pow(10,i);
    //     i++;
    // }
    //print the number
    printf("The number is %.2f",s);
    return 0;
}





// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>
// #include <math.h>
// int *creating_1d_array(int n)
// {
//     int *a = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         scanf(" %d ", &a[i]);
//     }
//     return a;
// }
// void display_1d_array(int *a, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf(" %d ", a[i]);
//     }
// }
// void finding_smallest_number_in_1d_array(int *a, int n)
// {
//     int smallest = INT_MAX, position_counter = 0;
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         if (a[i] < smallest)
//         {
//             smallest = a[i];
//             position_counter = i;
//         }
//     }
//     printf(" \nsmallest elemenet->  %d  at position -> %d\n", smallest, position_counter);
// }
// void finding_largest_number_in_1d_array(int *a, int n)
// {
//     int largest = INT_MIN, i, position_counter = 0;
//     for (i = 0; i < n; i++)
//     {
//         if (a[i] > largest)
//         {
//             largest = a[i];
//             position_counter = i;
//         }
//     }
//     printf("\nlargest elemenet->  %d  at position -> %d \n", largest, position_counter);
// }
// void second_largest_element_in_1d_array(int *a, int n)
// {
//     int largest = INT_MIN, i, position_counter = 0;
//     for (i = 0; i < n; i++)
//     {
//         if (a[i] > largest)
//         {
//             largest = a[i];
//             position_counter = i;
//         }
//     }
//     int second_largest = a[1];
//     int second_largest_position = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] != largest)
//         {
//             if (a[i] > second_largest)
//             {
//                 second_largest = a[i];
//                 second_largest_position = i;
//             }
//         }
//     }
//     printf("\nsecond largest elemenet->  %d  at position -> %d \n", second_largest, second_largest_position);
// }
// void forming_number()
// {
//     int number_of_digits;
//     printf("\nEnter number of digits : ");
//     scanf("%d", &number_of_digits);

//     int *a = creating_1d_array(number_of_digits);
//     int number = 0, i = 0;
//     while (i < number_of_digits)
//     {
//         number = number + a[i] * pow(10, i);
//         i++;
//     }
//     printf("\nThe number is -> %d", number);
//      free(a); // Free the allocated memory
// }
// void finding_duplicates(int *arr, int n)
// {
//     int found_duplicates = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 found_duplicates = 1;
//                 printf("\nDuplicates are found at the positions -> %d,%d\n", i + 1, j + 1);
//             }
//         }
//     }
//     if (!found_duplicates)
//     {
//         printf("\nNo duplicates found\n");
//     }
// }
// int main()
// {
//     int t;
//     printf("Enter number of test cases -> ");
//     scanf("%d", &t);
//     while (t--)
//     {
//         int c, n, *a;
//         printf("\nEnter the choice which you want -> \n1) creating and displaying array\n2)finding largest element\n3)finding second largest element\n4)finding smallest element\n5)finding duplicates\n6)forming number\n");
//         scanf("%d", &c);
//         switch (c)
//         {
//         case 1:

//             printf("Enter number of elements -> ");
//             scanf("%d", &n);

//             a = creating_1d_array(n);
//             display_1d_array(a, n);
//             free(a); // Free the allocated memory
//             break;

//         case 2:
//             printf("Enter number of elements -> ");
//             scanf("%d", &n);

//             a = creating_1d_array(n);
//             display_1d_array(a, n);
//             finding_largest_number_in_1d_array(a, n);
//             free(a); // Free the allocated memory
//             break;
//         case 3:
//             printf("Enter number of elements -> ");
//             scanf("%d", &n);

//             a = creating_1d_array(n);
//             display_1d_array(a, n);
//             finding_smallest_number_in_1d_array(a, n);
//             free(a); // Free the allocated memory
//             break;
//         case 4:
//             printf("Enter number of elements -> ");
//             scanf("%d", &n);

//             a = creating_1d_array(n);
//             display_1d_array(a, n);
//             second_largest_element_in_1d_array(a, n);
//             free(a); // Free the allocated memory
//             break;
//         case 5:
//             printf("Enter number of elements -> ");
//             scanf("%d", &n);

//             a = creating_1d_array(n);
//             display_1d_array(a, n);
//             finding_duplicates(a, n);
//             free(a); // Free the allocated memory
//             break;
//         case 6:
//             forming_number();
//             free(a); // Free the allocated memory

//         default:

//             printf("\nEnter the choice which you want -> \n1) creating and displaying array\n2)finding largest element\n3)finding second largest element\n4)finding smallest element\n5)finding duplicates");
//             scanf("%d", &c);
//         }
//     }
//     return 0;
// }