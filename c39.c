// //to sort the names of students
// #include<stdio.h> 
// #include<string.h> 
// #include<stdlib.h> 
// int main()
// {
//     int n;
//     printf("Enter the number of students: ");
//     scanf("%d",&n);

//     char ns[n][40], temp[40];
//     //int i,j;

//     while(getchar()!='\n');
//     for(int i=0;i<n;i++)
//     {
//         printf("\n Enter the name of %d student: ",i+1);
//         gets(ns[i]);
//     }

//     //Comparing the names
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-1;j++)
//         {
//             if(strcmp(ns[j],ns[j+1]>0))
//             {
//                 strcpy(temp,ns[j]); 
//                 strcpy(ns[j],ns[j+1]);  
//                 strcpy(ns[j+1],temp); 
//             }

//         }
//     }
//     for(int =0;i<n;i++)
//     {
//         printf("\n The name of %d student in sequential order: ",k+1);
//         puts(ns[k]);
//     }
//     return 0;
// }

#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    char ns[n][40], temp[40];  // Store an array of strings
    // Clear the input buffer
    while (getchar() != '\n');
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter the name of %d student: ", i + 1);
        // scanf("%39s", ns[i]); // Use scanf to input names
        gets(ns[i]);
    }
    // Comparing and sorting the names using bubble sort
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(strcmp(ns[j], ns[j+1]) > 0)
            {
                strcpy(temp, ns[j]);
                strcpy(ns[j], ns[j+1]);
                strcpy(ns[j+1], temp);
            }
        }
    }

    printf("\nNames of students in alphabetical order:\n");
    for(int i = 0; i < n; i++)
    {
        // printf("%d: %s\n", i + 1, ns[i]);
        puts(ns[i]);
    }

    return 0;
}