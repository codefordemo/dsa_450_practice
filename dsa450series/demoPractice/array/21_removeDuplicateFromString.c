// // CPP program to remove duplicate character
// // from character array and print in sorted
// // order
// #include<stdio.h>

// char *removeDuplicate(char str[], int n)
// {
//     // Used as index in the modified string
//     int index = 0;

//     // Traverse through all characters
//     for (int i = 0; i < n; i++)
//     {

//         // Check if str[i] is present before it
//         int j;
//         for (j = 0; j < i; j++)
//             if (str[i] == str[j])
//                 break;

//         // If not present, then add it to
//         // result.
//         if (i == j)
//         {
//             str[index] = str[i];
//             index++;
//         }
//     }

//     return str;
// }

// // Driver code
// int main()
// {
//     char str[] = "geeksforgeeks";
//     int n = sizeof(str) / sizeof(str[0]);
//     printf("%s", removeDuplicate(str, n));
//     return 0;
// }

// find pair from two array pow(x[i],y[i]) > pow(y[i] , x[i])
// method 1 run three nested loop and check
