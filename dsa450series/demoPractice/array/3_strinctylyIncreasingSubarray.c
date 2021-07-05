

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// method 1 function
// int incresingSubarry(int arr[], int n)
// {
//     int count=0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if(arr[j] > arr[j-1]){
//                 count++;
//             }else{
//                 break;
//             }
//         }

//     }
//     return count;
// }


//method 2 . if the arr is in increasing form then find length and use the below formuala to find out the reuslt

int incresingSubarry(int arr[], int n)
{
    int len = 1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i + 1] > arr[i])
        {
            len++;
        }
        else
        {
            count += ((len - 1) * len) / 2;
            len = 1;
        }
    }
    if (len > 1)
    {
        count += ((len - 1) * len) / 2;
    }
    return count;
}

int main()
{

    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d \n", incresingSubarry(arr, n));
    printf("the length is : %d", n);

    return 0;
}