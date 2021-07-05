// find pair from two array pow(x[i],y[i]) > pow(y[i] , x[i])
// method 1 run three nested loop and check

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>

int deleteArrayElement(int arr[], int n1, int element)
{
    for (int i = 0; i < n1; i++)
    {
        if (arr[i] == element)
        {
            printf("found at index %d ", i);
            // return i;
        }
    }
}

int main()
{

    int arr[] = {11, 12, 31, 1, 32, 3};

    int n1 = sizeof(arr) / sizeof(arr[0]);
    int pos = deleteArrayElement(arr, n1, 3);
    printf(" \n position is %d \n", pos);

    // to shift array element 
    for (int i = pos; i < n1 - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // to traverse the array element 
    for (int i = 0; i < n1 - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}