//find odd occurrence of a number in array
// method 1 : use double loop find count then find odd and return it
// method 2 hashing
// method 3 use bitwise operator

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int getOccur(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        //xor operator will give out odd no. or even no. occur
        res = res ^ arr[i];
    }
    return res;
}

int main()
{

    int arr[] = {1, 1,1, 2, 2,3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d \n", getOccur(arr, n));
    printf("the length is : %d", n);

    return 0;
}