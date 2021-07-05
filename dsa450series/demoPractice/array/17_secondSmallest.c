// find pair from two array pow(x[i],y[i]) > pow(y[i] , x[i])
// method 1 run three nested loop and check

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<limits.h>

int secondSmallest(int arr1[],int n1){
    int first =   INT_MAX;
    int second = INT_MAX;

    // is the size of the array is less then 2 then return invalid input
    if(n1< 2){
        printf("size of array is invalid \n");
    }

    for (int  i = 0; i < n1; i++)
    {
        if(arr1[i] < first){
            second = first;
            first = arr1[i]; 
        }else if( arr1[i] < second && arr1[i] > first){  // arr1[i] != first can also be the condition
            second = arr1[i];
        }
    }
    printf("second smallest is  %d ", second);
}
int main()
{

    int arr1[] = {-1, 0, -3, 4, 55, 6};
 
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    secondSmallest(arr1, n1);

    return 0;
}