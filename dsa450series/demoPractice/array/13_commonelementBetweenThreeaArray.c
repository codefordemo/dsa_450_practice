 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void CommonElementBetweenThreeArray(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            printf("%d ", arr1[i]);
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
}

int main()
{

    int r = 3, c = 6;
    int arr1[] = {1, 22, 3, 4, 55, 6};
    int arr2[] = {1, 22, 3, 4, 5, 6};
    int arr3[] = {11, 22, 3, 4, 5, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    CommonElementBetweenThreeArray(arr1, arr2, arr3, n1, n2, n3);
    // int arrSize1 = sizeof(arrvv ) / sizeof(arr1[0]);

    return 0;
}