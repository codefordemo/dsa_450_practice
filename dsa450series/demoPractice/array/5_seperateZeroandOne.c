#include <stdio.h>
#include <string.h>

int seperateZeros(int arr[], int n, int arr2[]){
    int  countZeros = 0;
    int  countOnes = 0;
    for (int  i = 0; i < n; i++)
    {
        if(arr[i] == 0){
            countZeros++;
        }else{
            countOnes++;
        }
    }
    arr2[0] = countZeros;
    arr2[1] = countOnes;
    // printf("No. of zeros is %d and ones are %d", countZeros, countOnes);
}

int main()
{
    int arr[] = {0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,0,1,0,1,0};
    int arr2[2];
    int n = sizeof(arr) / sizeof(arr[0]);
    // printf( seperateZeros(arr, n));
    seperateZeros(arr, n,arr2);

    printf("the zeros %d \n", arr2[0]);
    printf("ones are %d \n", arr2[1]);
    for (int i = 0; i < arr2[0]; i++)
    {
        printf("%d ", 0);
    }
    for (int i = 0; i < arr2[1]; i++)
    {
        printf(" %d ", 1);
    }

    return 0;
}