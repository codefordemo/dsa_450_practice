// // find pair from two array pow(x[i],y[i]) > pow(y[i] , x[i])
// // method 1 run three nested loop and check

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <limits.h>

// void thirdLagestInArray(int arr1[], int n1)
// {

//         int first = arr1[0];
//         for (int i =  1; i < n1; i++)
//         {
//             if (arr1[i] > first)
//             {
//                 first = arr1[i];
//             }
//         }
//         int second = INT_MIN;
//         for (int i = 0; i < n1; i++)
//         {
//             if (arr1[i] > second && arr1[i] < first)
//             {
//                 second = arr1[i];
//             }
//         }

//         int third = INT_MIN;
//         for (int i = 0; i < n1; i++)
//         {
//             if (arr1[i] > third && arr1[i] < second)
//             {
//                 third = arr1[i];
//             }
//         }
//         printf("third largest is %d \n ", third);

// }
// int main()
// {
//     //    55 22 6 5 3 1
//     int arr1[] = {1, 22, 3, 4, 55, 6};

//     int n1 = sizeof(arr1) / sizeof(arr1[0]);
//     thirdLagestInArray(arr1, n1);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

void thirdLagestInArray(int arr1[], int n1)
{

    int first = arr1[0];
    int second = INT_MIN;
    int third = INT_MIN;
    for (int i = 1; i < n1; i++)
    {
        if (arr1[i] > first)
        {
            third = second;
            second = first;
            first = arr1[i];
        }
        else if (arr1[i] > second)
        {
            third = second;
            second = arr1[i];
        }
        else if (arr1[i] > third)
        {
            third = arr1[i];
        }
    }
    printf("third largest is %d \n", third);
    printf("second largest is %d \n", second);
    printf("first largest is %d \n", first);
}
int main()
{
    //    55 22 6 5 3 1
    int arr1[] = {1, 2, 3, 4, 5};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    thirdLagestInArray(arr1, n1);

    return 0;
}