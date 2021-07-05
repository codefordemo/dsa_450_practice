// print the string in reverse order

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

int frequencyofSubString(char part[], char str[])
{
    // int strSize = sizeof(str) / sizeof(str[0]);
    // int partSize = sizeof(part) / sizeof(part[0]);
    int strSize = strlen(str);
    int partSize = strlen(part);
    int res = 0;

    for (int i = 0; i <= (strSize - partSize); i++)
    {
        int j;
        for (int j = 0; j < partSize; j++){
            if (str[i + j] != part[j]){
                break;
            }
        }
        if (j == partSize)
        {
            res++;
            j = 0;
            printf("2value of res is %d  ", res);
        }

        printf("3value of res is %d \n ", res);
    }
    return res;
}

int main()
{
    char str[15] = "dhimanman";
    char part[5] = "man";
    // printf("enter string \n");
    // gets(str);
    // printf("enter part of  string \n");
    // gets(part);
    printf("%d ", frequencyofSubString(part, str));
    // frequencyofSubString(part, str);
    return 0;
}

// Simple C++ program to count occurrences
// of pat in txt.
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <limits.h>
// #include <stdbool.h>
// #include <string.h>

// int countFreq(char pat[], char txt[])
// {
//     int M = strlen(pat);
//     int N = strlen(txt);
//     int res = 0;

//     /* A loop to slide pat[] one by one */
//     for (int i = 0; i <= N - M; i++)
//     {
//         /* For current index i, check for
// 		pattern match */
//         int j;
//         for (j = 0; j < M; j++)
//             if (txt[i + j] != pat[j])
//                 break;

//         // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
//         if (j == M)
//         {
//             res++;
//             j = 0;
//         }
//     }
//     return res;
// }

// /* Driver program to test above function */
// int main()
// {
//     char txt[15] = "dhimanman";
//     char pat[10] = "man";
//     printf("%d ", countFreq(pat, txt));
//     return 0;
// }
