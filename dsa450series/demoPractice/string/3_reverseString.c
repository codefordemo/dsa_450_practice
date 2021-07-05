// print the string in reverse order  

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

// void swap(char *x ,char *y){
//     char *temp;

//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// void reverseString(char *str, int start, int end){

//     for (int i = 0; i < end/2; i++)
//     {
//         swap(str[i], str[end - i]);
//     }

// }

void reverseString(char str[], int start, int end)
{
    if (start > end)
    {
        return;
    }
    else
    {

        int temp;
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        reverseString(str, start + 1, end - 1);
    }

    printf("%s ", str);
}

int main()
{
    char str[100];
    printf("enter string \n");
    gets(str);
    int n = strlen(str);
    reverseString(str, 0, n - 1);

    return 0;
}
