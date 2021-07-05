// find pair of two element whose sum is equal to the sum of the given number

// to find maixium differernc uuse > and __WINT_MIN__ in maxdifferenc
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int MinimumDifference(int arr[], int arrSize){
    // int minDiff = INFINITY;
    int minDiff = __INT_MAX__;

    for (int i = 0; i < arrSize; i++)
    {
        for (int j = i+1; j < arrSize; j++)
        {
            if( abs(arr[i] -arr[j] ) < minDiff){
                minDiff =  abs(arr[i] - arr[j]);
            }
        }
        return minDiff;
    }
    
}

int main()
{
    int arr[] = {111, 21, 131, 411, 511};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int found = MinimumDifference(arr, arrSize);
    printf("%d", found);

    return 0;
}