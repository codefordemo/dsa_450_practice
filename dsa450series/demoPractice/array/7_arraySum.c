// find pair of two element whose sum is equal to the sum of the given number

#include<stdio.h>

int ArraySum(int arr[], int number,  int arrSize){

    for (int  i = 0; i <= arrSize; i++)
    {
        for (int  j = i+1; j <= arrSize; j++)
        {
            int x = arr[i] + arr[j];
            if(number ==  x){
                printf("yes  ");
                return 1;
            }
        }
        return 0;
        }
    
}


int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int found = ArraySum(arr, 6, arrSize);
    printf("%d", found);

    return 0;
}