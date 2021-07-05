// find pair from two array pow(x[i],y[i]) > pow(y[i] , x[i])
// method 1 run three nested loop and check

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>

int frequencyArrayElement(int arr[], int n1)
{

    bool check[n1];
    for (int i = 0; i < n1; i++){
        check[i] = 0;
    }

    for (int i = 0; i < n1; i++){
        if (check[i] == 1){
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n1; j++){
            if (arr[i] == arr[j]){
                check[i] == 1;
                count++;
            }
        }

        printf("frequency %d is %d times \n", arr[i], count);
    }
}

int main()
{

    int arr[] = {-1,2,3,1,2,3};

    int n1 = sizeof(arr) / sizeof(arr[0]);
    frequencyArrayElement(arr, n1);

    return 0;
}