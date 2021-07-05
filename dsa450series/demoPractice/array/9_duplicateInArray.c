// this work for only positive array number

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int DuplicateInArray(int arr[], int arrSize){

    for (int  i = 0; i < arrSize; i++)
    {
        if(arr[abs(arr[i])] >= 0){
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        }else{
            printf("%d ", abs(arr[i]));
        }
    }
    
}

int main()
{
    int arr[] = {1,1,2,5,4,3,5};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    DuplicateInArray(arr, arrSize);
     
    return 0;
}