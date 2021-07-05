

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pairWithGivenArray(int arr1[], int n1, int givenNumber)
{
    int i = 0, j = 1;
    while (i < n1 && j < n1)
    {

        if (i != j && (arr1[j] - arr1[i]) == givenNumber)
        {
            printf(" pair are : %d and %d \n", arr1[i], arr1[j]);
            return 1;
        }
        else if (arr1[j] - arr1[i] < givenNumber)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    printf("no such pair ");
    return 0;
}
int main()
{

    int arr1[] = {1, 22, 3, 4, 55, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int data = pairWithGivenArray(arr1, n1, 21);
    printf("%d ", data);
    // int arrSize1 = sizeof(arrvv ) / sizeof(arr1[0]);

    return 0;
}