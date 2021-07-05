#include <stdio.h>
#include<string.h>

int pythagoraTriplet(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int x = arr[i] * arr[i];

                int y = arr[j] * arr[j];

                int z = arr[k] * arr[k];
                if (x == y + z || y == x + z || z == x + y)
                {
                    printf("%d %d %d \n", x, y, z);
                    return 1;
                    
                }
                 
            }
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Triplet found %d", pythagoraTriplet(arr, n));
    return 0;
}