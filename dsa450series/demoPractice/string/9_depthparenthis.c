#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

// C function to find the second most frequent character
// in a given string 'str'
int depth(char str[])
{
    int max = 0, currmax = 0;
    int size = strlen(str);
    for (int i = 0; i <= size; i++)
    {
        if (str[i] == '(')
        {
            currmax++;
            if (currmax > max)
            {
                max = currmax;
            }
        }
        else if (str[i] == ')')
        {
            if (currmax > 0)
            {
                currmax--;
            }
            else
            {
                return -1;
                printf("no fund");
            }
        }
    } 
    if (currmax != 0)
    {
        return -1;

        // printf(" nffo    ");
    }
    return max;
    // printf("%d ", max);
    // printf("%d ", currmax);
}

// Driver program to test above function
int main()
{
    char str[] = "(((()))";
    int size = strlen(str);
    printf("%d ", depth(str));
    // depth(str);
}
