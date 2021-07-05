#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>

// C function to find the second most frequent character
// in a given string 'str'
int substring(char a[], char b[] ){
    int aSize = strlen(a);
    int bSize = strlen(b);

    for (int i = 0; i <= (bSize - aSize); i++)
    {
        int j;
        for (  j = 0; j < aSize; j++)
        {
            if(b[i+j] != a[j]){
                break;
            }
            
        }
        if (j == aSize){
            return i;
            // printf("%d ",    i);
        }
    }

    return -1;
}
 

// Driver program to test above function
int main()
{
    char a[] = "cdab";
    char b[] = "cddcdab";
    int res = substring(a, b);
    if(res == -1){
        printf("not found ");

    }else{
        printf("found at %d ",res);
    }
    return 0;
}
