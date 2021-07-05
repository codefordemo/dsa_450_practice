//work only for sorted array 
// otherwise first do quicksort

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int sumClosestToZero(int arr[], int arrSize)
{
    int min_sum = __INT_MAX__;
    int sum;
    int l = 0, r = arrSize - 1;
    int min_left = l, min_right = arrSize - 1;
    if(arrSize < 2){
        printf("Invalid array ");
    }
    while (l<r)
    {
        sum = arr[l] + arr[r];
        if(abs(sum) < abs(min_sum)){
            min_sum = sum;
            min_left = l;
            min_right = r;
        }
        if(sum < 0){
            l++;
        }else{
            r--;
        }
    }
    printf("the two element whose sum is closest to zero is %d and %d ", arr[min_left], arr[min_right]);

}

int main()
{
    
    int arr1[] = {-10,0,25, 28, 30, 55};
     
    int arrSize1 = sizeof(arr1) / sizeof(arr1[0]);

    sumClosestToZero(arr1, arrSize1);

    return 0;
}