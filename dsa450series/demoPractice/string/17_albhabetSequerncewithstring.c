// this only check for continous duplicate only

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int res = 0;
    char str[] = "4545";
    for (int i = 0; i < strlen(str); i++)
    {
        // if (i == (str[i] - 'a') || i == (str[i] - 'A'))
        // {

        //     res++;
        // }
        printf("%d ", str[i] - '0');
    }

    printf(" \n time  %d ", res);

    return 0;
}
