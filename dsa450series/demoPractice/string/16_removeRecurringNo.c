// this only check for continous duplicate only

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

int removeRecurringElement(char str[])
{
    // int n = sizeof(str) / sizeof(str[0]);
    int m = strlen(str);
    // printf(" sizeof %d \n" ,n);
    // printf("strlen %d ", m);

    int j = 0;
    for (int i = 0; i < m; i++)
    {
        str[j++] = str[i];

        while (i + 1 < m && str[i] == str[i + 1]){
            i++;
        }
    }
    str[j] = '\0';
    printf("%s ", str);
}

int main()
{
    char str[] = "11233323344";
    // char part[5] = "man";
    // printf("%d ", removeRecurringElement(str));
    removeRecurringElement(str);
    // printf("%c ", removeRecurringElement(str));

    return 0;
}
