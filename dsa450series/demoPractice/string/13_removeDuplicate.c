

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

// int removeDuplicate(char str[])
// {
//     int n = strlen(str);
//     int index = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int j;
//         for (j = 0; j < n; j++)
//         {
//             if (str[i] == str[j])
//             {
//                 break;
//             }
//         }
//         if (j == i)
//         {
//             str[index++] = str[i];
//         }
//     }
//     printf("%s ", str);
//     // return str;
// }

// int main()
// {
//     char str[100];
//     printf("enter string \n");
//     gets(str);
//     int n = strlen(str);
//     removeDuplicate(str);
//     printf("%s ", removeDuplicate(str));
//     return 0;
// }

// CPP program to remove duplicate character
// from character array and print in sorted
// order
 

char *removeDuplicate(char str[], int n)
{
    // Used as index in the modified string
    int index = 0;

    // Traverse through all characters
    for (int i = 0; i < n; i++)
    {

        // Check if str[i] is present before it
        int j;
        for (j = 0; j < i; j++)
            if (str[i] == str[j])
                break;

        // If not present, then add it to
        // result.
        if (j == i)
            str[index++] = str[i];
    }

    return str;
}

// Driver code
int main()
{
    char str[100];
        printf("enter string \n");
        gets(str);
        // int n = strlen(str);
        // removeDuplicate(str);
    // char str[] = "geeksforgeeks";
    int n = sizeof(str) / sizeof(str[0]);
     printf("%s ",removeDuplicate(str, n ));
    return 0;
}
