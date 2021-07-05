// approach : find both array sum and then subtract the sum of both array then will be the required no.
// but work only for one missing number
// second approach : find lenght of both array then iterate over the array check each element then return 
// number

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// int FindMissingInDuplicateArray(int arr1[], int arr2[], int arrSize1, int arrSize2)
// {

// }

int arraySum(int arr[], int arrSize)
{
    int sum = 0;
    for (int i = 0; i < arrSize; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int sum1 = 0;
    int sum2 = 0;
    int arr1[] = {1, 3, 2, 5};
    int arr2[] = {1, 3, 2, 5};
    int arrSize1 = sizeof(arr1) / sizeof(arr1[0]);
    int arrSize2 = sizeof(arr2) / sizeof(arr2[0]);
    sum1 = arraySum(arr1, arrSize1);
    sum2 = arraySum(arr2, arrSize2);
    printf("sum 1 %d \n", sum1);
    printf("sum2 is %d \n", sum2);
    if (abs(sum1 - sum2) == 0)
    {
        printf("No missing number found \n");
    }
    else
    {
        printf("Missing no. is %d ", abs(sum1 - sum2));
    }
    return 0;
}