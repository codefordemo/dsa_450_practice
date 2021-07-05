// find pair from two array pow(x[i],y[i]) > pow(y[i] , x[i])
// method 1 run three nested loop and check

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int findPair(int arr1[], int arr2[], int n1, int n2)
{
    int count = 0;
    for (int i = 0; i < n1; i++)
    {
        for (int j = i + 1; j < n1; j++)
        {
            if (pow(arr1[i], arr1[j]) > pow(arr1[j], arr1[i]))
            {
                printf("found \n");
                count++;
            }
        }
    }
    printf("Not found \n");
    printf("count is : %d ", count);
}
int main()
{

    int arr1[] = {1, 22, 3, 4, 55, 6};
    int arr2[] = {1, 3, 4, 2, 4, 45};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    findPair(arr1, arr2, n1, n2);

    return 0;
}