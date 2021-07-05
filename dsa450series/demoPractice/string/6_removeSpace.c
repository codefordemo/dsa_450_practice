// print the string in reverse order

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

void removeSpace(char *str )
{
    // int n = strlen(str);
    int  count = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] != " ")
        {
            str[count++] = str[i];
             
        }
    }
    str[count] = '\0';
  
}

int main()
{
    // char str[100];
    printf("enter string \n");
    // gets(str);
    char str[] = " hwll ot jsf ";
    // int n = strlen(str);
    removeSpace(str);
    printf("%s ", str);

    return 0;
}
